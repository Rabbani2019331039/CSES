#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
 
using namespace std;

void solve(){
   map<char,int> dict;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
      dict[s[i]]++;
   }
   bool odd =false;
   char oddCh;
   int oddChLen = 0;
   for(auto it: dict){
      if(it.second &1){
         if(odd){
            cout<<"NO SOLUTION"<<endl;
            return;
         }else{
            odd = true;
            oddCh = it.first;
            oddChLen = it.second;
         }
      }
   }
 
   string ans;
   for(auto it: dict){
      char c = it.first;
      int len = it.second;
      if(len%2==0) len/=2;
      else continue;
      ans+=string(len,c);
   }
   string rev = ans;
   reverse(rev.begin(), rev.end());
   cout<<ans<< (oddChLen >0?(string(oddChLen, oddCh)):"") <<rev<<endl;
}
 
 
int main(){
   int t =1;
   // cin>>t;
   while(t--) solve();
   return 0;
}