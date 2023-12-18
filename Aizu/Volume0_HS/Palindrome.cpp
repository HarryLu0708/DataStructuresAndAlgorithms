#include <bits/stdc++.h>

using namespace std;

bool palindrome(string s){
	stack<char> stk;
	for(int i=0;i<(int)s.length();i++){
		if(stk.top()==s[i])stk.pop();
		else stk.push(s[i]);
	}
	if(stk.empty())return true;
	return false;
}

int main(){
	string s;
	int cnt=0;
	while(cin>>s){
		if(palindrome(s))cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
