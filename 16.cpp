// Maximum element in an array

#include<iostream>
#include<climits>
using namespace std;

int main(){

int n;
cin>>n;
  

int arr[n];
for (int i=0;i<n; i++){
cin>> arr[i];
}


int max = arr[0];
 max = INT_MIN;
for (int i=0; i<n; i++){
if (max<arr[i]){
max = arr[i];
}
}
cout<<max;
return 0;
}