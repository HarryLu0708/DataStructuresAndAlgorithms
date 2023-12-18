#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,maxv,minv,v;
	cin>>n;
	cin>>minv;maxv=-2000000000;
	for(int i=1;i<n;i++){
		cin>>v;
		maxv=max(v-minv,maxv);
		minv=min(minv,v);	
	}
	cout<<maxv<<'\n';
	return 0;
}
