// second largest element in an array
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//  int n;
// cout<<"Enter the size of an array";
// cin>>n;

// int arr[n];
// for (int i=0; i<n; i++){
// cin>>arr[i];
// }

// int max = arr[0];
// max = INT_MIN;

// for (int i=0; i<n; i++){
// if (max< arr[i]){
// max = arr[i];
// }
// }
// int smax = INT_MIN;
// for (int i=0; i<n; i++){
// if (arr[i]!=max && smax<arr[i])
// {
// smax= arr[i];
// }

// cout<<smax;

// return 0;
// }
#include<iostream>
#include<climits>
using namespace std;

int main(){
 int n;
cin>>n;

int arr[n];
for (int i=0; i<n; i++){
cin>>arr[i];
}

int largest=INT_MIN;
int secondLargest=INT_MIN;

 for (int i=0; i<n; i++){

     if (arr[i]>largest){
secondLargest=largest;
largest=arr[i];
}
 
 else
if (arr[i]>secondLargest && arr[i]!=largest)
{
secondLargest = arr[i];
}
}
cout<<secondLargest;
 
return 0;
}
//  #include<iostream>
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