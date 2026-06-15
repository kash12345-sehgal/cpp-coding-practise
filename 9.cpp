//........................... Armstrong number..............................
#include<iostream>
#include<cmath>
using namespace std;

int main(){

// count digits
int n;
cin>>n;
int original=n;
int digits=0;

int temp=n;
 
 while(temp>0)
{
digits++;
temp/=10;
}

// sums digits

 int sum=0;
 temp=n;
while(temp>0)
{
 int digit= temp%10;
 sum+=pow(digit,digits);
temp/=10;
}
if(sum==original)
cout<<"Armstrong";
else
cout<<"Not Armstrong";
return 0;
}