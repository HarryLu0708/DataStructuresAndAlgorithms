#include <bits/stdc++.h>

using namespace std;
char s[200];
int main(){
	cin.getline(s,200);
	for(int i=0;i<200;i++){
		if(s[i]>='a'&&s[i]<='z'){s[i]-=32;}
	}
	cout<<s<<'\n';
	return 0;
}
