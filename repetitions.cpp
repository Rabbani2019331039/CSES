#include <bits/stdc++.h>
 
using namespace std;
int main(){
 
	string s;
	cin>>s;
	int max=0,cnt=0;
	char c=s[0];
	for(int i=0;s[i];){
		cnt=0;
		while(s[i]==c){
			cnt++;
			i++;
		}
		if(max<cnt) max= cnt;
		c=s[i];
	}
 
	cout<<max;
    return 0;
