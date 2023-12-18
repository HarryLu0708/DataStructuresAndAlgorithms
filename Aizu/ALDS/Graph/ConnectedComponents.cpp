#include <bits/stdc++.h>
#define WHITE 0
#define GRAY 1

using namespace std;

vector<int> G[100001];
int n,color[100001];

void dfs(int u, int c){
	stack<int> S;
	S.push(u);//Push u to the search stack
	color[u]=c;//assign color to current node
	while(!S.empty()){//untial the search stack is end
		int r=S.top();S.pop();//select current search node from stack 
		int l=G[r].size();
		for(int i=0;i<l;i++){//go through all the adj node of the current node
			int v=G[r][i];//current node
			if(color[v]==0){//if v doesnt has color yet, assign a color and push to the stack
				color[v]=c;
				S.push(v);
			}
		}
	}
}

void assignColor(){
	int id=1;//We use id to represents color
	//If a node doesn't have color, then search and colored it. 
	for(int i=0;i<n;i++)if(color[i]==0)dfs(i,id++);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int m,s,t,q;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>s>>t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	assignColor();
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>s>>t;
		if(color[s]==color[t])cout<<"yes"<<'\n';
		else cout<<"no"<<'\n';
	}
	return 0;
}





