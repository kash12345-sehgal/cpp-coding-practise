// reverse digits..........................


// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cin>>n;
// int rev=0;
//  while(n>0){
// int digit = n%10;
// rev=rev*10+digit;
// n/=10;

// }
// cout<<rev;
// return 0;
// }
// brute solution using string
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
string s;
cin>>s;
reverse(s.begin(),s.end());
cout<<s;

return 0;
}