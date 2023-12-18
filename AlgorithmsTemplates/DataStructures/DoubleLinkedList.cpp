#include <iostream>

using namespace std;

const int N=100010;
int m;
int e[N],l[N],r[N],idx;

void init(){
	r[0]=1;
	l[1]=0;
	idx=2;
}

//在下标维k的右边插入一个点
void add(int k,int x){
	//更新新节点指针
	e[idx]=x;
	r[idx]=r[k];
	l[idx]=k;
	//不能写反
	l[r[k]]=idx;
	r[k]=idx;
}
//在左边插入：add(l[k],x)

//删除一个点
void remove(int k){
	r[l[k]]=r[k];
	l[r[k]]=l[k];
}

int main(){
	
}

