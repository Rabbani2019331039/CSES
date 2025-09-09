#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
 
long long dis(long long a, long long b, long long aa, long long bb){
   return (abs(a-aa) + abs(b-bb));
}
 
void solve(){
   
   long long a, b;
   cin>>a>>b;
   long long sq = max(a,b);
   long long mx = sq * sq;
   if(sq&1){
      cout<<mx - dis(1, sq, a,b)<<endl;
   }else{
      cout<<mx - dis(sq,1,a,b)<<endl;
   }
 
 
  
 
}
 
 
int main(){
   int t =1;
   cin>>t;
   while(t--) solve();
 
   return 0;
