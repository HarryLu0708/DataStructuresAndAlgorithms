#include <iostream>

using namespace std;

char s[100];

int main(){
	int n;
	cin>>n;
	cin>>s;
	int pivot = n/2;
	bool flag = true;
	for(int i=0,j=pivot;i<pivot&&j<n;i++,j++){
		if(s[i]!=s[j])flag=false;
	}
	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
