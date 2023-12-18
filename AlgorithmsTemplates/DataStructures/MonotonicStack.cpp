//给定一个序列，序列中每一个数左边/右边离它最近的且比他大的数

#include <iostream>

using namespace std;

const int N=10010;
int stk[N];
int tt=0;

int main(){
	int n,x;
	cin>>n;
	//ios::sync_with_stdio(false);cin.tie(0);
	for(int i=0;i<n;i++){
		cin>>x;
		while(tt&&stk[tt]>=x)tt--;
		if(tt)cout<<stk[tt]<<endl;
		else cout<<-1<<endl;
		stk[++tt]=x;
	}
	return 0;
}


