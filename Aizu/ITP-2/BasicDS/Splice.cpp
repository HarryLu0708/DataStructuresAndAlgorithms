#include <bits/stdc++.h>

using namespace std;

list<int> qs[1001];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int c,t,x;
		cin>>c;
		if(c==0){
			cin>>t>>x;
			qs[t].push_back(x);
			continue;
		}else if(c==1){
			cin>>t;
			list<int>::iterator it=qs[t].begin();
			if(qs[t].size()==0){
				cout<<'\n';
				continue;
			}
			it=qs[t].begin();
			cout<<*it;
			it++;
			for(;it!=qs[t].end();it++)cout<<' '<<*it;
			cout<<'\n';
			continue;
		}else{
			cin>>t>>x;
			qs[x].splice(qs[x].end(),qs[t]);
			
			continue;
		}
	}
	return 0;
}
