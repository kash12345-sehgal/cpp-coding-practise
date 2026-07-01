class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];
        int maxDiff = -1;
        for (int i=0; i<nums.size(); i++){
            if(nums[i]<mini){
                mini = nums[i];
            }
            else if(nums[i]>mini){
                    int currentDiff = nums[i]-mini;
                    maxDiff = max( maxDiff,currentDiff);
            }
            
        }
        return maxDiff;
    }
};