// // sum of first n numbers brute solution
// #include<iostream>
// using namespace std;

// int main(){
// int n;
// int sum=0;
// cin>>n;
// for (int i=1; i<=n; i++){
// sum +=i;
// }
// cout<<sum;
// return 0;
// }
// optimal solution
#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
int sum = n*(n+1)/2;
cout<<sum;
return 0;
}