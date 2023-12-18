#include <bits/stdc++.h>

using namespace std;

int arr[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q,b,e,x;
	cin>>n;
	for(int i=0; i<n; i++)cin>>arr[i];
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>b>>e>>x;
		//0:min; 1:max
		int count=0;
		for(int j=b; j<e; j++){
			if(arr[j]==x)count++;
		}
		cout<<count<<'\n';
	}
	return 0;
}
