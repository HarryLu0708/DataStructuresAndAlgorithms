#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	map<string,int> s;
	string key,l,r;
	int o,x,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>o;
		switch (o) {
		case 0:
			cin>>key>>x;
			s[key]=x;
			break;
		case 1:
			cin>>key;
			cout<<s[key]<<'\n';
			break;
		case 2:
			cin>>key;
			s.erase(key);
			break;
		case 3:
			cin>>l>>r;
			map<string,int>::iterator lower=s.lower_bound(l),upper=s.upper_bound(r);
			for(;lower!=upper;lower++){
				if(lower->second!=0)cout<<lower->first<<' '<<lower->second<<'\n';
			}
			break;
		}
	}
	return 0;
}
