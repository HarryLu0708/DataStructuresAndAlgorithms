#include <iostream>

using namespace std;

char s[100];

int main(){
	int n;
	cin>>n>>s;
	for(int i=1;i<n;i++){
		if(s[i]==s[i-1]&&s[i]>96){
			s[i]-=32;
			s[i-1]-=32;
		}
	}
	cout<<s<<endl;
	return 0;
}
