#include <iostream>

using namespace std;

int lowbit(int x){
	return x&-x;
}

int main(){
	/*n的二进制表示方法中，第k位是多少
	  - 1: 先把第k位移动到最后一位，n>>k
	  - 2： 看一下个位数是多少，x&1
	  - Formula: n>>k&1
	 */
	int n;
	cin>>n;
	for(int i=3;i>=0;i--)cout<<(n>>i&1);
	cout<<'\n';
	/*
	  lowbit(x)：返回x的最后一个一是多少）
	  树状数组的基本操作，统计x的1的出现次数
	  lowbit（1010）：10
	  公式：x&-x=x&（~x+1）
	  -x=~x+1
	 */
	int res=0;
	while(n){
		n-=lowbit(n);
		res++;
	}
	cout<<res<<'\n';
	return 0;
}
