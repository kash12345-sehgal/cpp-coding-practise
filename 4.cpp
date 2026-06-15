// ...................count digits......................

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// int count =0;
// while (n>0){
// count++;
// n/=10;
// }
// cout<<count;
// return 0;
// }
// optimal solution
#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n;
cin>>n;


int count = log10(n)+1;
cout<<count;
return 0;
}