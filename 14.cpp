// selection sort 
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//  int n;
// cin>>n;

//  int arr[n];
// for (int i=0;i<n;i++){
// cin>>arr[i];
// }
// for (int i=0;i<n-1;i++){
// int minIndex = i;

// for ( int j=i+1;j<n;j++){
// if (arr[j]<arr[minIndex]){
//   minIndex = j;
// }
// }
// swap(arr[i],arr[minIndex]);
// }
// for (int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// }

// return 0;
// }
// 
//selection sort in this sorting technique:
//1. lets considered the first element are min element -> arr[i]
//2. then check all other element in the array and see if their is min element considered   if considered then update with min element -> swap(arr[i],arr[minIndex])

// #include<iostream>
// using namespace std;

// int main(){
 
// int n;
// cin>>n;


// int arr[n];
// for(int i=0;i<n;i++){
// cin>> arr[i];
// }


// for (int i=0;i<n-1;i++)
// {
// int minIndex = i;
// for (int j=i+1;j<n;j++){
// if (arr[j] < arr[minIndex])
// {
// minIndex = j;
// }
// }
// swap (arr[i] , arr[minIndex]);
// }
// for (int i=0;i<n;i++){
// cout<<arr[i]<<" ";
// }
// return 0;
// }
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
 int n;
cin>>n;

int arr[n];
for (int i=0; i<n; i++){
cin>>arr[i];
}

for (int i=0; i<n-1; i++){
int mini = i;
for (int j=i+1; j<n; j++){
if (arr[j]<arr[mini]){
mini = j;
}
}
swap(arr[i],arr[mini]);
}

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
return 0;
}