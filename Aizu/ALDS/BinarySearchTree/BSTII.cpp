#include <bits/stdc++.h>

using namespace std;

//Use pointer to connect each node
struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;

Node * find(Node *u, int k){
	while(u!=NIL&&k!=u->key){
		if(u->key>k)u=u->left;
		else u=u->right;
	}
	return u;
}

//Insert
void insert(int k){
	Node *y=NIL;
	Node *x=root;
	//Initialize new node: z
	Node *z;
	//Allocate memorybfor z
	z=(Node *)malloc(sizeof(Node));
	//set z
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	
	//Search for the parent of the new node from the root
	while(x!=NIL){
		y=x;//set current node to y(if loop ends, then y is the parent of z)
		//Use left smaller right bigger method find parent
		if(z->key<x->key)x=x->left;
		else x=x->right;
	}
	//Set y as the parent of node z
	z->parent=y;
	if(y==NIL)root=z;//if y doesn't exist, then the z is the root
	else{//if y is exists
		if(z->key<y->key)y->left=z;//if z<y, then left
		else y->right=z;//other, right
	}
}

void preParse(Node *u){
	if(u==NIL)return;
	cout<<' '<<u->key;
	preParse(u->left);
	preParse(u->right);
}

void inParse(Node *u){
	if(u==NIL)return;
	inParse(u->left);
	cout<<' '<<u->key;
	inParse(u->right);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,i,x;
	string o;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>o;
		if(o=="insert"){
			cin>>x;
			insert(x);
		}
		else if(o=="print"){
			inParse(root);
			cout<<'\n';
			preParse(root);
			cout<<'\n';
		}
		else if(o=="find"){
			cin>>x;
			Node *t=find(root,x);
			if(t!=NIL)cout<<"yes"<<'\n';
			else cout<<"no\n";
		}
	}
	return 0;
}

