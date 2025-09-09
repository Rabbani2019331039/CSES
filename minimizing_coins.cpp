// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <map>
#include<bits/stdc++.h>
 
using namespace std;
 
long long DP(vector<long long> &dp, vector<int> &coins, int x){
   dp[0] = 0;
   for(int i=1;i<=x;i++){
      for(auto coin: coins){
         if(i-coin>=0){
            dp[i] = min(dp[i], dp[i-coin]+1);
         }
      }
   }
   return dp[x];
}
 
 
void solve(){
   vector<long long> dp (1000007, INT_MAX);
   int n,x;cin>>n>>x;
   vector<int> coins(n);
   for(int i=0;i<n;i++){
      cin>>coins[i];
   }
 
   
   long long ans = DP(dp, coins, x);
   // for(int i=1; i<=x;i++){
   //    cout<<dp[i]<<' ';
   // }
   // cout<<endl;
   if(ans >= INT_MAX){
      cout<< -1 <<endl;
   }else{
      cout<<ans<<endl;
   }
   
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}