#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;
 
void solve(){
   
   long long n;
   cin>>n;
   long long sum =(n*(n+1)/2);
   bool check = sum &1? false:true ;
   sum/=2;
   if(check){
      cout<<"YES"<<endl;
      vector<long long> a,b;
      for(int i=n;i>=1;i--){
         if(i<=sum){
             a.push_back(i);
             sum-=i;
         }
         else b.push_back(i);
      }
      cout<<a.size()<<endl;
      for(auto i: a) cout<<i<<' ';
      cout<<endl;
 
      cout<<b.size()<<endl;
      for(auto i: b) cout<<i<<' ';
      cout<<endl;
   }
   else{
      cout<<"NO"<<endl;
   }
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
 
   return 0;
}
