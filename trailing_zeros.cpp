#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
void solve(){
   
   int n;
   cin>>n;
   int count =0;
   while(n>=5){
      n/=5;
      count += n;
   } 
   cout<<count<<endl;
 
   
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}