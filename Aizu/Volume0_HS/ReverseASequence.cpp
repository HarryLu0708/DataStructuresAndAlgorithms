#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	for(int i=0;i<(int)s.size()/2;i++){
		swap(s[i],s[(int)s.size()-i-1]);
	}
	cout<<s<<'\n';
	return 0;
}
