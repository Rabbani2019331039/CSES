#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
void DP(vector<long long> &dp){
   dp[1] = 1;
   dp[2] = 2;
   dp[3] = 4;
   dp[4] = 8;
   dp[5] = 16;
   dp[6] = 32;
 
   for(int i=7;i<1000007;i++){
      dp[i] = dp[i-1] + dp[i-2]+dp[i-3] + dp[i-4]+dp[i-5] + dp[i-6];
      dp[i]%=1000000007;
   }
}
 
 
void solve(){
   vector<long long> dp (1000007);
   DP(dp);
   int n;cin>>n;
   cout<<dp[n]<<endl;
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}