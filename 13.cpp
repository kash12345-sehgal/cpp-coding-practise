// sorting of an array 1. Bubble Sort
// 2. Selection Sort
// 3. Insertion Sort
// 4. Merge Sort
// 5. Quick Sort
// 6. Binary Search
// 7. STL sort()
// Dry Run
// ↓
// Logic
// ↓
// Code
// ↓
// Complexity
// ↓
// Interview Questions
#include<iostream>
using namespace std;

int main(){
 int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
 
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1]){


swap(arr[j],arr[j+1]);
}
}
}


for(int i=0;i<n;i++){
cout<<arr[i]<<"";
}
return 0;
}
