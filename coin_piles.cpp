#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
 
 
void solve(){
   
   int a,b;
   cin>>a>>b;
   if((a+b)%3 == 0){
      int aa = 2*min(a,b);
      int bb = max(a,b);
      if(aa>=bb){
 
         cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
   }else{
      cout<<"NO"<<endl;
   }
}
 
 
int main(){
   int t =1;
   cin>>t;
   while(t--) solve();
 
   return 0;
}