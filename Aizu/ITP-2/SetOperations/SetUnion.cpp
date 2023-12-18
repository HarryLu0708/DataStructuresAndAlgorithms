#include <bits/stdc++.h>

using namespace std;

bitset<1000000006> bs;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,m,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		bs[x]=true;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		if(bs[x]==true)cout<<x<<'\n';
	}
	return 0;
}
