#include <bits/stdc++.h>

using namespace std;

priority_queue<int> qs[1001];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int c,t,x;
		cin>>c;
		if(c==0){
			cin>>t>>x;
			qs[t].push(x);
		}else if(c==1){
			cin>>t;
			if(!qs[t].empty())cout<<qs[t].top()<<'\n';
		}else{
			cin>>t;
			if(!qs[t].empty())qs[t].pop();
		}
	}
	return 0;
}
