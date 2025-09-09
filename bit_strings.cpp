#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
long long binPow(long long a, long long b, long long m){
   a %= m;
   long long res = 1;
   while(b>0){
      if(b&1)
         res = res * a % m;
      a = a * a % m;
      b>>=1;
   }
   return res;
}
 
void solve(){
   
   int n;
   cin>>n;
   cout<<binPow(2,n,1000000007)<<endl;
 
   
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}