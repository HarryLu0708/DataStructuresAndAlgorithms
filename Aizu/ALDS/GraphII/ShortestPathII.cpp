#include <bits/stdc++.h>
#define WHITE 0//None
#define GRAY 1//Consider
#define BLACK 2//Added
#define INFY 1<<21

using namespace std;

const int MAX=10000;

int n;
int color[MAX];
vector<pair<int,int>> adj[MAX];//use adj list to represents weighted graph

void dijkstra(){
	priority_queue<pair<int,int>> PQ;//pq init
	int d[MAX];
	for(int i=0;i<n;i++)d[i]=INFY;//set all to infy make algo easier to compare
	d[0]=0;//starting point init
	PQ.push(make_pair(0,0));//staring point init
	color[0]=GRAY;//starting point init
	while(!PQ.empty()){
		pair<int,int> f=PQ.top();PQ.pop();//pick a node in the pq
		int u=f.second;//node 
		color[u]=BLACK;//set the node 
		if(d[u]<f.first*(-1))continue;//if the value in pq greater than value in the d array, ignore it
		int l=adj[u].size();
		for(int j=0;j<l;j++){//search all the adj nodes of the node u
			int v=adj[u][j].first;//the distance of node u to adj node j
			if(color[v]==BLACK)continue;//if already search it, ignore it
			if(d[v]>d[u]+adj[u][j].second){//if the distance we calculated smaller then current distance
				d[v]=d[u]+adj[u][j].second;//replace it
				PQ.push(make_pair(d[v]*(-1),v));//push the distance in the pq
				color[v]=GRAY;
			}
		}
	}
	for(int i=0;i<n;i++)cout<<i<<' '<<(d[i]==INFY?-1:d[i])<<'\n';
}
	
int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n;
	int u,k,v,w;
	for(int i=0;i<n;i++){
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>v>>w;
			adj[u].push_back(make_pair(v,w));
		}
	}
	dijkstra();
	return 0;
}
