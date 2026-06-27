#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    set<int> st;

    for (int i = 0; i < a.size(); i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < b.size(); i++)
    {
        st.insert(b[i]);
    }

    vector<int> ans;

    for (auto it : st)
    {
        ans.push_back(it);
    }

    return ans;
}

int main()
{
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;

    vector<int> a(n1);

    cout << "Enter first sorted array:\n";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;

    vector<int> b(n2);

    cout << "Enter second sorted array:\n";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    vector<int> ans = sortedArray(a, b);

    cout << "Union: ";

    for (int x : ans)
        cout << x << " ";

    return 0;
}