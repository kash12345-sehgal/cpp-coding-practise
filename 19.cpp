// left rotate by one place 
#include<iostream>
#include<vector>
using namespace std;
 
void leftRotateByOne(vector<int>&arr)
{
int temp = arr[0];
for (int i=0; i<arr.size()-1; i++){
arr[i] =arr[i+1];
}
arr[arr.size()-1] = temp;
}
int main(){
int n;
cin>>n;

vector<int>arr(n);
for (int i=0; i<n; i++){
cin>>arr[i];
}
leftRotateByOne(arr);
cout<<"Array after left rotation by one:";
for (int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
return 0;
}
