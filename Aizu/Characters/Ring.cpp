#include <bits/stdc++.h>

using namespace std;

int main(){
	string ring,pattern;
	cin>>ring>>pattern;
	ring = ring + ring;
	int x=ring.find(pattern);
	if(x!=-1)cout<<"Yes"<<"\n";
	else cout<<"No"<<"\n";
	return 0;
}
