#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,k,b,x=0;
	cin>>n>>k;
	bitset<32> bs(0),mask(0);
	for(int i=0;i<k;i++){
		cin>>b;
		mask[b]=1;
	}
	do{
		if((bs|~mask).all()){
			cout<<x<<":";
			for(int i=0;i<n;i++){
				if(bs[i])cout<<' '<<i;
			}
			cout<<'\n';
		}
		x+=1;
		bs=x;
	}while(~bs[n]);
	return 0;
}
