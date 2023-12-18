#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int n,k;
	cin>>n>>k;
	cin>>s;
	for(int i=k-1;i<(int)s.size();i++){
		if(s[i]>96)s[i]-=32;
		else s[i]+=32;
	}
	cout<<s<<endl;
	return 0;
}
