#include <bits/stdc++.h>

using namespace std;

vector<int> vs[1001];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);

	int n,q;
	cin>>n>>q;
	for(int i=0; i<q; i++){
		int query,t,x;
		cin>>query;
		cin>>t;
		if(query==0){
			cin>>x;
			vs[t].push_back(x);
		}
		else if(query==1){
			int len=vs[t].size();
			for(int j=0; j<len; j++){
				if(j!=len-1)cout<<vs[t][j]<<' ';
				else cout<<vs[t][j];
			}
			cout<<'\n';
		}
		else{
			while(vs[t].size()!=0)vs[t].pop_back();
		}
	}
	return 0;
}
