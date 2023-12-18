#include <bits/stdc++.h>
#define MAX 10000
#define NIL -1

using namespace std;

struct Node{
	int p,l,r;
};

struct Node T[MAX];
int n;

void print(int u){
	cout<<" "<<u;
}

void preParse(int u){
	if(u==NIL)return;
	print(u);
	preParse(T[u].l);
	preParse(T[u].r);
}

void inParse(int u){
	if(u==NIL)return;
	inParse(T[u].l);
	print(u);
	inParse(T[u].r);
}

void postParse(int u){
	if(u==NIL)return;
	postParse(T[u].l);
	postParse(T[u].r);
	print(u);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,id,left,right;
	cin>>n;
	for(int i=0;i<n;i++)T[i].p=NIL;
	for(int i=0;i<n;i++){
		cin>>id>>left>>right;
		T[id].l=left;
		T[id].r=right;
		if(right!=NIL)T[right].p=id;
		if(left!=NIL)T[left].p=id;
	}
	int root=0;
	for(int i=0;i<n;i++)if(T[i].p==NIL)root=i;
	cout<<"Preorder\n";
	preParse(root);
	cout<<'\n';
	cout<<"Inorder\n";
	inParse(root);
	cout<<'\n';
	cout<<"Postorder\n";
	postParse(root);
	cout<<'\n';
	return 0;
}

