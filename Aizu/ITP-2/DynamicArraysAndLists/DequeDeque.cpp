#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int q;
	deque<int> dq;
	cin>>q;
	for(int i=0; i<q; i++){
		int o;
		cin>>o;
		switch(o){
		case 0:
			int d,x;
			cin>>d>>x;
			if(d==0)dq.push_front(x);
			else dq.push_back(x);
			break;
		case 1:
			int p;
			cin>>p;
			cout<<dq[p]<<'\n';
			break;
		case 2:
			int dd;
			cin>>dd;
			if(dd==0)dq.pop_front();
			else dq.pop_back();
			break;
		}
	}
	return 0;
}
