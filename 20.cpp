// left rotate by D places
#include <iostream>
#include <vector>
using namespace std;

void leftRotateByD(vector<int>& arr, int d)
{
    int n = arr.size();

    d = d % n;

    vector<int> temp(d);

    for(int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for(int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cout << "Enter d: ";
    cin >> d;

    leftRotateByD(arr, d);

    cout << "Array after left rotation by " << d << " places: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}