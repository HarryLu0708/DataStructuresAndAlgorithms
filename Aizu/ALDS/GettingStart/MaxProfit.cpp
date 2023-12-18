#include <bits/stdc++.h>

using namespace std;

int arr[200006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,maxv,minv;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	minv=arr[0];maxv=-2000000000;
	for(int i=1;i<n;i++){
		maxv=max(arr[i]-minv,maxv);
		minv=min(minv,arr[i]);	
	}
	cout<<maxv<<'\n';
	return 0;
}
