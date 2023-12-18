/*
  struct Node{
	  int val;
	  Node *next;
  }
  new Node();//过慢，容易超时
  拿数组模拟链表:
  - 数组模拟单链表 -> 邻接表（最主要的应用：存储图和树）
  - 数组模拟双链表 -> 应用：优化某些问题
  数组进行定义：
  - e[n]：表示val
  - ne[n]：表示next指针
  - 用下标将两个数组关联起来
  - 空节点用-1下标表示
 */

#include <iostream>

using namespace std;

const int N=10010;

//head表示头节点的下标
//e[n]：表示val
//ne[n]：表示next指针
//idx表示我们当前用到了哪个地址

int head,e[N],ne[N],idx;

//初始化
void init(){
	head = -1;
	idx = 0;
}


//将x插入到头节点
void add_to_head(int x){
	e[idx] = x;
	ne[idx] = head;
	head = idx;
	idx++;
}

//在节点k后添加节点x
void add(int k,int x){
	e[idx] = x;
	ne[idx] = x;
	ne[k] = idx;
	idx++;
}

//删除节点k后的一个点
void remove(int k){
	ne[k] = ne[ne[k]];
}

int main(){
	int m;
	cin>>m;
	while(m--){
		char op;
		int k,x;
		cin>>op;
		if(op=='H'){
			cin>>x;
			add_to_head(x);
		}else if(op=='D'){
			cin>>k;
			if(!k)head=ne[head];
			remove(k-1);
		}else{
			cin>>k>>x;
			add(k-1,x);
		}
	}
	for(int i=head;i!=-1;i=ne[i])cout<<e[i]<<endl;
}






