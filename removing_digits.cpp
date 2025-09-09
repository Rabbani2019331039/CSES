// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
#include<bits/stdc++.h>
 
using namespace std;
int const mod = 1000000007;
 
vector<int> getDigits(int n){
   vector<int> ans;
   while(n){
      int a = n%10;
      if(a){
         ans.push_back(a);
      }
      n/=10;
   }
   return ans;
}
 
int DP(vector<int> &dp, int n){
   for(int i=1;i<10;i++) dp[i] =1;
 
   for(int i=10;i<=n;i++){
      vector<int> digits = getDigits(i);
      for(int d: digits){
         dp[i] = min(dp[i], dp[i-d]+1);
      }
   }
 
   return dp[n];
}
 
 
void solve(){
   int n;
   cin>>n;
   vector<int> dp(n+5,INT_MAX);
 
   int ans = DP(dp,n);
   cout<<ans<<endl;
   
}
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}