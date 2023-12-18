#include <bits/stdc++.h>

using namespace std;

int G[101][101];//Adj Matrix
int n;
int color[101],d[101];

void bfs(int s){
	queue<int> Q;
	Q.push(s);//push first node to the queue
	for(int i=0;i<n;i++)d[i]=1<<21;//Init array d
	d[s]=0;//set current d to 0
	int u;
	while(!Q.empty()){//until q is empty
		u=Q.front();Q.pop();//check the first node in queue and pop it fromqueue
		for(int v=0;v<n;v++){//check all the adj nodes of u
			if(G[u][v]==0)continue;//adj node doesnt exists->skip
			if(d[v]!=1<<21)continue;//already checked->skip
			d[v]=d[u]+1;//distance calculation: the distance of current node is the distance of previous node plus one
			Q.push(v);//push current node to queue
		}
	}
	for(int i=0;i<n;i++)cout<<i+1<<' '<<((d[i]==1<<21)?(-1):d[i])<<'\n';
}

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
	bfs(0);
	return 0;
}
