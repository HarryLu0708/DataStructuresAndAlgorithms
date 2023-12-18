#include <bits/stdc++.h>

using namespace std;

int main(){
	int s,v;
	cin>>s>>v;
	int t=ceil(s/v)+10;
	int h=8-t/60;
	int m=60-t%60;
	cout<<h<<":"<<m<<endl;
	return 0;
}
