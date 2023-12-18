#include <bits/stdc++.h>

using namespace std;

int main(){
	while(true){
		string s;
		int m,n;
		cin>>s;
		if(s=="-")break;
		cin>>m;
		vector<char> l;
		int len=s.size();
		for(int i=0; i<len; i++)l.push_back(s[i]);
		for(int i=0; i<m; i++){
			cin>>n;
			for(int j=0; j<n; j++){
				l.push_back(l[0]);
				l.erase(l.begin());
			}
		}
		for(int i=0; i<len; i++)cout<<l[i];
		cout<<'\n';
	}
	return 0;
}
