#include <bits/stdc++.h>

using namespace std;

//Use pointer to connect each node
struct Node{
	int key;
	Node *parent, *left, *right;
};

Node *root, *NIL;


Node* treeMin(Node * x){//Find next node in the left branch of the BST
	while(x->left!=NIL)x=x->left;
	return x;
}

//Use the max value in left subtree or min value of right sub tree to replcae target value
Node * getSuccessor(Node *x){
	if(x->right!=NIL)return treeMin(x->right);//if right branch exists, then treeMin
	Node *y=x->parent;//down to top to search to find target
	while(y!=NIL&&x==y->right){
		x=y;
		y=y->parent;
	}
	return y;
}

/*
  Case 1: no child
  Case 2: one child
  Case 3: two chils
 */
void deleteNode(Node *z){
	Node *x,*y; //Set two temp nodes
	if(z->left==NIL||z->right==NIL)y=z;//if z has one or none child, then store z into temp node y
	else y=getSuccessor(z);//if z has two childs, then the delete target is the node after z
	
	//Now, our delete target is y
	if(y->left!=NIL)x=y->left;//if y has left node, then x is the left child node of y
	else x=y->right;
	
	//*y's part* means the part that above y node(except y node)
	
	if(x!=NIL)x->parent=y->parent;//Connect x part to y's parent part
	
	//Connect y's part ot x part 
	if(y->parent==NIL)root=x;//if y is the root node, then x is the root node
	else if(y==y->parent->left)y->parent->left=x;//if y is the left child node of parent node p, then x is the child node of parent node
	else y->parent->right=x;
	
	//COpy key value
	if(y!=z)z->key=y->key;
}

//Use BST property to search BTS
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
		else if(o=="delete"){
			cin>>x;
			deleteNode(find(root, x));//First find the node and then delete it
		}
	}
	return 0;
}

