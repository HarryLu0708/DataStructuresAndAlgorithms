#include <bits/stdc++.h>

using namespace std;

struct Node{
	int key;
	Node *prev, *next;
};

Node *nil;

void init(){
	nil=(Node *)malloc(sizeof(Node));
	nil->next=nil;
	nil->prev=nil;
}

void insert(int key){
	Node *x=(Node*)malloc(sizeof(Node));
	x->key=key;
	
	x->next=nil->next;
	nil->next->prev=x;
	nil->next=x;
	x->prev=nil;
}

Node* listSearch(int key){
	Node *cur=nil->next;
	while(cur!=nil&&cur->key!=key)cur=cur->next;
	return cur;
}

void deleteNode(Node *t){
	if(t==nil)return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t);
}

void deleteFirst(){
	deleteNode(nil->next);
}

void deleteLast(){
	deleteNode(nil->prev);
}

void deleteKey(int key){
	deleteNode(listSearch(key));
}

void printList(){
	Node *cur=nil->next;
	int isf=0;
	while(1){
		if(cur==nil)break;
		if(isf++>0)cout<<' ';
		cout<<cur->key;
		cur=cur->next;
	}
	cout<<'\n';
}

int main() {
	//std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n, key, size = 0;
	char op[20];
	cin>>n;
	getchar();
	init();
	for (int i = 0; i < n; i++) {
		cin>>op;
		cin>>key;
		cout<<"head:"<<op<<endl;
		if (op[0] == 'i') {
			insert(key);
			size++;
		}
		else {
				if (op[6]=='F') {
					cout<<op<<' '<<"deleteLast"<<endl;
					deleteFirst();
				}
				else if(op[6]=='L') {
					deleteLast();
					cout<<op<<' '<<"deleteFirst"<<endl;
				}
				else {
					deleteKey(key);
				}
			size--;
		}
	}
	printList();
	return 0;
}
