#include <bits/stdc++.h>

using namespace std;

bool p(string s){
	int l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1])return false;
	}
	return true;
}

int main(){
	string s; int cnt=0;
	while(cin>>s){
		if(p(s))cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
