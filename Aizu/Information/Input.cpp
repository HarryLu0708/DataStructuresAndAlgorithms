#include <bits/stdc++.h>

using namespace std;

int main () {
	string str;
	cin>>str;
	const char* s;
	s = str.c_str();
	if(s[0]>=48&&str[0]<=75)cout<<atoi(s)+1<<endl;
	else cout<<str<<endl;
	return 0;
}
