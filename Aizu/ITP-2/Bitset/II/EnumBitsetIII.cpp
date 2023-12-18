#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int t,u,n,k;
	vector<int> v;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>t;
		u|=(1<<t);
	}
	int x=u;
	do{
		v.push_back(x);
		x=u&(x-1);
	}while(x!=u);
	reverse(v.begin(),v.end());
	for(int x:v){
		cout<<x<<':';
		for(int i=0;i<n;i++){
			if(x>>i&1)cout<<' '<<i;
		}
		cout<<'\n';
	}
	return 0;
}
