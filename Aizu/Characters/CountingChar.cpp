#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int l=s.size();
	for(int i=0; i<l; i++){
		if(int(s[i])>=97&&int(s[i]<=122))cout<<char(s[i]-32);
		else if(int(s[i])>=65&&int(s[i])<=90)cout<<char(s[i]+32);
		else cout<<s[i];
	}
	cout<<'\n';
	return 0;
}
