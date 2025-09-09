#include <bits/stdc++.h>
 
using namespace std;
int main(){
 
	int n,set;
	cin>>n;
	if(n<=3 && n>1) cout<<"NO SOLUTION";
	else if(n%2){
		for(int i=n;i>0;i-=2)
			cout<<i<<' ';
		
		for(int i=n-1;i>0;i-=2)
			cout<<i<<' ';
	}
	else{
		for(int i=n-1;i>0;i-=2)
			cout<<i<<' ';
		for(int i=n;i>0;i-=2)
			cout<<i<<' ';
	}
    return 0;
}