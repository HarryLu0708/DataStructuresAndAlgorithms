#include <iostream>

using namespace std;

int main(){
	int n;
	while(true){
		cin>>n;
		if(n==0)break;
		int sum=0;
		while(n>0){
			sum+=n%10;
			n/=10;
		}
		cout<<sum<<endl;
	}
	return 0;
}
