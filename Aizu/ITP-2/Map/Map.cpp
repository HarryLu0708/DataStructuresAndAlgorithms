#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	map<string,int> s;
	string key;
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
		}
	}
	return 0;
}
