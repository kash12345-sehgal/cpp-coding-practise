class Solution {
public:
    // Helper function: Kisi specific column me sabse bada element (max element) ka row index dhoondne ke liye
    int findMaxRowIndex(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1;
        int maxRowIndex = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                maxRowIndex = i;
            }
        }
        return maxRowIndex;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();    // Total rows
        int m = mat[0].size(); // Total columns
        
        int low = 0, high = m - 1;
        
        // Columns par Binary Search lagayenge
        while (low <= high) {
            int midCol = low + (high - low) / 2;
            
            // 1. Is mid column ka sabse bada element kis row me hai, wo dhoondo
            int maxRow = findMaxRowIndex(mat, n, m, midCol);
            
            // 2. Us element ke Left aur Right padosi (neighbors) ko check karo
            int leftNeighbor = (midCol - 1 >= 0) ? mat[maxRow][midCol - 1] : -1;
            int rightNeighbor = (midCol + 1 < m) ? mat[maxRow][midCol + 1] : -1;
            
            // 3. Agar mid element dono padosiyon se bada hai, toh wahi Peak hai!
            if (mat[maxRow][midCol] > leftNeighbor && mat[maxRow][midCol] > rightNeighbor) {
                return {maxRow, midCol};
            }
            // 4. Agar left wala padosi bada hai, toh left half me search karo
            else if (leftNeighbor > mat[maxRow][midCol]) {
                high = midCol - 1;
            }
            // 5. Agar right wala padosi bada hai, toh right half me search karo
            else {
                low = midCol + 1;
            }
        }
        
        return {-1, -1};
    }
};