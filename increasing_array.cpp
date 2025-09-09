#include <bits/stdc++.h>
 
using namespace std;
int main(){
 
	int n,set;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>set;
		arr.push_back(set);
	}
	long long ans=0;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]<arr[i]){
			ans+=arr[i]-arr[i+1];
			arr[i+1]=arr[i];
		}
	}
	cout<<ans;
    return 0;
