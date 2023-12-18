#include <iostream>

using namespace std;

int main(){
	int max=0,a,b,ii=0;
	for(int i=0;i<7;i++){
		cin>>a>>b;
		if(a+b>8&&a+b>max){max=a+b;ii=i+1;}
	}
	cout<<ii<<endl;
	return 0;
}
