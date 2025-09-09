// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
#include<bits/stdc++.h>
 
using namespace std;
int const mod = 1000000007;
 
int DP(vector<vector<int>> &dp, vector<int> &coins, int x){
   for(int i=0;i<coins.size();i++){
      dp[i][0] = 1;
   }
   for(int i=coins.size()-1;i>=0;i--){
      for(int k=1;k<=x;k++){
         dp[i][k] = (k-coins[i]>=0?dp[i][k-coins[i]]:0) + dp[i+1][k];
         dp[i][k]%=mod;
      }
   }
 
   return dp[0][x];
}
 
 
void solve(){
   int n,x;cin>>n>>x;
   vector<vector<int>> dp(n+5, vector<int> (x+5, 0));
   vector<int> coins(n);
   for(int i=0;i<n;i++){
      cin>>coins[i];
   }
 
   
   int ans = DP(dp, coins, x);
   cout<<ans<<endl;
   // for(int i=1; i<=x;i++){
   //    cout<<dp[i]<<' ';
   // }
   // cout<<endl;
   
   
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}