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
int n,G[101][101],p[101],d[101],color[101];

int prim(){
	for(int i=0;i<n;i++){//initialize d and p lists
		d[i]=INFY;
		p[i]=-1;
	}
	d[0]=0;
	while(true){
		//Select node u==select the min cost edge
		//the edge of MST=(p[u],u)
		int min=INFY;
		int u=-1;
		for(int i=0;i<n;i++){
			if(color[i]!=BLACK&&d[i]<min){//Finding the node that exists and doesnt add to the visited list
				min=d[i];//Store the min
				u=i;//Store the i
			}
		}
		//如果没有找到这样的节点，则所有节点都已添加到MST，算法结束。
		if(u==-1)break;
		color[u]=BLACK;
		/*
		  检查所有与u相邻的节点v。如果v未被添加到MST中并且u与v之间的边的权值小于v的当前最小距离值，则更新v的d值并设置其父节点为u。
		 */
		for(int v=0;v<n;v++){
			if(color[v]!=BLACK&&G[u][v]!=INFY){
				if(d[v]>G[u][v]){
					d[v]=G[u][v];
					p[v]=u;
					color[v]=GRAY;
				}
			}
		}
	}
	//Calculate the min sum
	int sum=0;
	for(int i=0;i<n;i++)if(p[i]!=-1)sum+=G[i][p[i]];
	return sum;
}

int main(){
	//Input Module
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int e;
			cin>>e;
			//if the road isnt accessible, then we give it INFY value to represents unaccessible
			if(e==-1)G[i][j]=INFY;
			else G[i][j]=e;
		}
	}
	//Output
	cout<<prim()<<'\n';
}
