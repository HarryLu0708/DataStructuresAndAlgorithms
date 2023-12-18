#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	set<int> s;
	int n,q,o,t,l,r;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>o;
		switch (o) {
		case 0:
			cin>>t;
			s.insert(t);
			cout<<s.size()<<'\n';
			break;
		case 1:
			cin>>t;
			cout<<s.count(t)<<'\n';
			break;
		case 2:
			cin>>t;
			s.erase(t);
			break;
		case 3:
			cin>>l>>r;
			set<int>::iterator itr1=s.lower_bound(l),itr2=s.upper_bound(r);
			while(itr1!=itr2){
				cout<<*itr1<<'\n';
				itr1++;
			}
			break;
		}
	}
	cin>>q;
	return 0;
}
