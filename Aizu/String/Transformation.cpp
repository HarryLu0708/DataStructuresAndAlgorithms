#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int n;
	cin>>s>>n;
	for(int i=0; i<n; i++){
		string cmd;
		int a,b;
		cin>>cmd>>a>>b;
		string t=s.substr(a,b-a+1);
		if(cmd=="replace"){
			string str;
			cin>>str;
			s.replace(a,b-a+1,str);
			
		}else if(cmd=="print"){
			cout<<t<<'\n';
		}else if(cmd=="reverse"){
			reverse(t.begin(), t.end());
			s.replace(a, b - a + 1, t);
		}
		
	}
	return 0;
}

