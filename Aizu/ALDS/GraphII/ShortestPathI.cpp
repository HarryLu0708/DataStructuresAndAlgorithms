#include <bits/stdc++.h>
#define WHITE 0//None
#define GRAY 1//Consider
#define BLACK 2//Added
#define INFY 1<<21

using namespace std;

/*
  - n: total nodes
  - G: adj matrix
  - p: record all nodes in the MST
  - d: record min cost edges 
  - color: record nodes' statues
 */
int n,G[101][101],d[101],color[101];

void dijkstra(){
	int minv;
	//Initialize search list
	for(int i=0;i<n;i++)d[i]=INFY;
	//Set start point shortest distance to zero and already searched
	d[0]=0;
	while(1){
		//Set next vistied node to -1 and set minv to infy . make algo easier to compared
		minv=INFY;
		int u=-1;
		for(int i=0;i<n;i++){//Choose consider node
			if(minv>d[i]&&color[i]!=BLACK){//choose which edge to go
				u=i;
				minv=d[i];
			}
		}
		if(u==-1)break;//if u=-1, then we alreay searched all the nodes so we quit the loop
		color[u]=BLACK;//Noted u already searched
		for(int v=0;v<n;v++){//search all the adj nodes of u
			if(color[v]!=BLACK&&G[u][v]!=INFY){//calculate shortest path
				if(d[v]>d[u]+G[u][v]){//if distance in the chart greater than current distance+distance to the new node
					d[v]=d[u]+G[u][v];//record min distance
				}
			}
		}
	}
	for(int i=0;i<n;i++)cout<<i<<' '<<(d[i]==INFY?-1:d[i])<<'\n';//INFY means unreachable
}

int main(){
	int k,v,w,u;
	//Input Module
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			G[i][j]=INFY;
		}
	}
	for(int i=0;i<n;i++){
		cin>>u>>k;
		for(int j=0;j<k;j++){
			cin>>v>>w;
			G[u][v]=w;
		}
	}
	dijkstra();
}
