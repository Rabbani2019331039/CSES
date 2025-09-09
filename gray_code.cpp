// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
#include<bits/stdc++.h>
 
using namespace std;
int const mod = 1000000007;
 
 
string numToBits(int n, int len){
   string s;
   while(n){
      s+= '0'+n%2;
      n/=2;
      len--;
   }
   s+=string(len, '0');
   reverse(s.begin(), s.end());
   return s;
 
}
 
void solve(){
   int n;
   cin>>n;
 
   vector<int> nums(1<<n);
   for(int i=0;i<1<<n;i++){
      nums[i] = i;
   }   
   for(int i=0;i<n-1;i++){
      int inc = 1<<(i+1);
      for(int start = 0 ; start < 1<<n; start+= inc+inc){
         reverse(nums.begin()+start, nums.begin()+start+inc);
      }   
   }
 
   for(int k=0;k<1<<n;k++){
      cout<<numToBits(nums[k], n)<<endl;
   }
      
      
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}