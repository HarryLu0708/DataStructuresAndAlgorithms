/*
  Input:
  - n: the number of nodes
  - id: the index of node
  - k: the degree
  - c_i: ith child node
  Output:
  node: id: parent=p, depth=d, type, [c_1....c_k]
  - p: parent node index
  - d: current depth
  - type: the type of node
  - c: subnode list
  Constraint: tree depth not greater than 20
  
  
 */

#include <bits/stdc++.h>

using namespace std;

struct Node{//Left-child, Right-sibling representations
	int parent,left,right;
};

const int MAX=100005;
const int NIL=-1;

struct Node T[MAX];
int D[MAX];

//Get the depth of current Node:
int getDepth(int u){//From lower to upper, climb the tree~~~
	int d=0;
	while(T[u].parent!=NIL){
		u=T[u].parent;
		d++;
	}
	return d;
}

//Get the depth of current Node by recurrsion
void setDepth(int u,int p){//u: current node; p: depth
	D[u]=p;//store the depth in the list D
	if(T[u].right!=NIL)setDepth(T[u].right,p);//if right silbing exists, then set silbing depth to p(same to current node)
	if(T[u].left!=NIL)setDepth(T[u].left,p+1);//if left child exists, then depth p+1
}

void print(int u){
	int i,c;
	cout<<"node "<<u<<": ";//Node Index
	cout<<"parent = "<<T[u].parent<<", ";//Parent Index
	cout<<"depth = "<<D[u]<<", ";//Current Depth
	
	//Determine type
	if(T[u].parent==NIL)cout<<"root, ";
	else if(T[u].left==NIL)cout<<"leaf, ";
	else cout<<"internal node, ";
	
	cout<<'[';
	
	//Traverse child node list
	for(i=0,c=T[u].left;c!=NIL;i++,c=T[c].right){//
		if(i)cout<<", ";
		cout<<c;
	}
	
	cout<<']'<<'\n';
}

int main(){
	int n,v,d,c,l,r;
	cin>>n;
	for(int i=0;i<n;i++)T[i].parent=T[i].left=T[i].right=NIL;//Initialize
	for(int i=0;i<n;i++){
		cin>>v>>d;
		for(int j=0;j<d;j++){//Cin the degree to child node
			cin>>c;//Child Nodes
			if(j==0)T[v].left=c;//Set the first child node to the V
			else T[l].right=c;//Set to the next right node
			l=c;//Set to equal node
			T[c].parent=v;//Transfer to the next right nodes
		}
	}
	for(int i=0;i<n;i++){//Find root node to traverse the depth
		if(T[i].parent==NIL)r=i;
	}
	setDepth(r,0);
	for(int i=0;i<n;i++)print(i);
	return 0;
}

