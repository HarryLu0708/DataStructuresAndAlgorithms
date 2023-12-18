#include <bits/stdc++.h>
using namespace std;

struct Node{//1 pointer point to left node and another point to right node
	int parent,left,right;
};

const int MAX=10005;
const int NIL=-1;

struct Node T[MAX];
int D[MAX],H[MAX];

int setHeight(int u){
	int h1=0,h2=0;
	if(T[u].right!=NIL)h1=setHeight(T[u].right)+1;
	if(T[u].left!=NIL)h2=setHeight(T[u].left)+1;
	return H[u]=max(h1,h2);
}

void setDepth(int u,int d){
	if(u==NIL)return;
	D[u]=d;
	setDepth(T[u].left,d+1);
	setDepth(T[u].right,d+1);
}

int getSilbing(int u){
	if(T[u].parent==NIL)return NIL;//?
	if(T[T[u].parent].left!=u&&T[T[u].parent].left!=NIL)return T[T[u].parent].left;//check parent node left side if there's node exists, if exists then return it'
	if(T[T[u].parent].right!=u&&T[T[u].parent].right!=NIL)return T[T[u].parent].right;//check parent node right side if there's node exists, if exists then return it'
	return NIL;
}

void print(int u){
	cout<<"node "<<u<<": ";
	cout<<"parent = "<<T[u].parent<<", ";
	cout<<"sibling = "<<getSilbing(u)<<", ";
	int deg=0;//find degree
	if(T[u].left!=NIL)deg++;
	if(T[u].right!=NIL)deg++;
	cout<<"degree = "<<deg<<", ";
	cout<<"depth = "<<D[u]<<", ";
	cout<<"height = "<<H[u]<<", ";
	if(T[u].parent==NIL)cout<<"root\n";
	else if(T[u].left==NIL&&T[u].right==NIL)cout<<"leaf\n";
	else cout<<"internal node\n";
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int v,l,n,r,root=0;
	cin>>n;
	for(int i=0;i<n;i++)T[i].parent=NIL;
	for(int i=0;i<n;i++){
		cin>>v>>l>>r;
		//set left and right nodes
		T[v].left=l;
		T[v].right=r;
		//set left and right node's parent
		T[l].parent=v;
		T[r].parent=v;
	}
	for(int i=0;i<n;i++)if(T[i].parent==NIL)root=i;//Find root in tree list
	setDepth(root,0);
	setHeight(root);
	for(int i=0;i<n;i++)print(i);
	return 0;
}
