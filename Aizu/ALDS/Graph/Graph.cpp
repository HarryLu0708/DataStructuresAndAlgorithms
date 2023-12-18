#include <bits/stdc++.h>

using namespace std;

const int MAX=102;

int G[MAX][MAX];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,u,v,k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u>>k;
		u--;
		for(int j=0;j<k;j++){
			cin>>v;
			v--;
			G[u][v]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j)cout<<' ';
			cout<<G[i][j];
		}
		cout<<'\n';
	}
	return 0;
}
