#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,k;
	cin>>n>>k;
	for(long d=0;d<(1<<n);d++){
		int o=0;
		for(int i=0;i<n;i++)if(d&(1<<i))o++;
		if(o==k){
			cout<<d<<':';
			for(int j=0;j<n;j++){
				if(d&(1<<j))cout<<' '<<j;
			}
			cout<<'\n';
		}
	}
	return 0;
}
