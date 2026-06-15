// second largest element in an array
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){

// int n;
// cin>>n;

// int arr[n];
// for(int i=0; i<n;i++)
// cin>>arr[i];


// int largest=INT_MIN;
// int secondLargest=INT_MIN;


// for(int i=0;i<n;i++)
// {

// if(arr[i]>largest)
// {

// secondLargest=largest;
// largest=arr[i];
// }

// else if (arr[i]>secondLargest && arr[i]!=largest){
//     secondLargest = arr[i];
// }
// }

// cout<<secondLargest;

// return 0;

// }

// brute force approach
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){

// int n;
// cin>>n;

// int arr[n];
// for(int i=0;i<n;i++)
// cin>>arr[i];

// sort(arr,arr+n);
// int largest=arr[n-1];
// for(int i=n-2;i>=0;i--){

//  if(arr[i]!=largest)
//  {
//       int secondLargest=arr[i];
//      break;
//  }
// }
// cout<<arr[n-2];
// return 0;
// }
// if no second largest element exists
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];

sort(arr,arr+n);
int largest=arr[n-1];
for(int i=n-2;i>=0;i--){

 if(arr[i]!=largest)
{
 cout<<arr[i];
return 0;
}
}
cout<<"No secondLargest";


return 0;
}