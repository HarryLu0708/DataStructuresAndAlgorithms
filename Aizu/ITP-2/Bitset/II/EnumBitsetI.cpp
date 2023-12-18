#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,x;
	cin>>n;
	bitset<32> bs(0);
	do{
		cout<<bs.to_ulong()<<':';
		for(int i=0;i<n;i++){
			if(bs[i])cout<<' '<<i;
		}
		cout<<'\n';
		x+=1;
		bs=x;
	}while(~bs[n]);
	return 0;
}
