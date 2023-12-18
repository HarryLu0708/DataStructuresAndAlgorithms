#include <bits/stdc++.h>
#define WHITE 0
#define GRAY 1

using namespace std;

int G[101][101];
int n,color[101],d[101],f[101],tt;

void dfs(int u){
	int v;
	color[u]=GRAY;//marked the current node to visited
	d[u]=++tt;//record the start time
	for(v=0;v<n;v++){//go through all the adj nodes
		if(G[u][v]==0)continue;//if node doesn't exists, skip this turn
		if(color[v]==WHITE)dfs(v);//if node exists, start dfs this node 
	}
	f[u]=++tt;//marked the finished time
}

void init(){
	int u;
	tt=0;
	for(u=0;u<n;u++)if(color[u]==WHITE)dfs(u);//visited all the node that we haven't visited yet using dfs
	for(u=0;u<n;u++)cout<<u+1<<' '<<d[u]<<' '<<f[u]<<'\n';
}

/*
  d: the time to start investigate the node
  f: the time to finish investigate the node adj list
 */
int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int u,k,v;
	//Input Module
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>u>>k;
		u--;//change the u to make it start with 0
		for(int j=0;j<k;j++){
			cin>>v;
			v--;//change the v to make it start with 0
			G[u][v]=1;
		}
	}
	init();
	return 0;
}
