// two sum and find the target
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
 int n;
cin>>n;
vector<int>arr(n);


for(int i=0;i<n;i++){
cin>>arr[i];
}
int target;
cin>>target;

unordered_map<int,int>mp;

for (int i=0;i<n;i++){

int needed = target- arr[i];

if (mp.find (needed)!= mp.end())
{
cout<<mp[needed]<<""<<i;
return 0;
}
mp[arr[i]]=i;
}
 

return 0;
}