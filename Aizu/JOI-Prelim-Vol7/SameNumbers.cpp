#include <iostream>

using namespace std;

int main(){
	int i,s,t;
	cin>>i;
	s=i%10;t=i/10;
	if(s==t)cout<<1<<endl;
	else cout<<0<<endl;
	return 0;
}
