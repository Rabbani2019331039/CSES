#include <bits/stdc++.h>
 
using namespace std;
int main(){
	int n,set;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n-1;i++){
		cin>>set;
		arr.push_back(set);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-1;i++){
		if(arr[i]!=i+1){
			cout<<i+1;
			return 0;
		}
	}
	cout<<n;
	return 0;
}