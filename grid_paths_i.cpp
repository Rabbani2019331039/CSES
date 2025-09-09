// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
#include<bits/stdc++.h>
 
using namespace std;
int const mod = 1000000007;
 
 
 
long long DP(vector<vector<long long>> &dp, vector<string> &g){
   int n = g.size();
   if(g[0][0] != '*')
      dp[1][1] = 1;
   for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if(i==1 && j == 1) continue;
         if(g[i-1][j-1] == '*'){
            dp[i][j]=0;
         }
         else{
            dp[i][j] = (dp[i-1][j]+dp[i][j-1]) % mod;
         }
      }
   }
 
 
   return dp[n][n];
}
 
 
void solve(){
   int n;
   cin>>n;
   vector<vector<long long>> dp(n+5,vector<long long> (n+5, 0));
   vector<string> g(n);
   for(int i=0;i<n;i++) cin>>g[i];
 
   
   long long ans = DP(dp,g);
   cout<<ans<<endl;
   
   
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}