#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n&(n-1)){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	return 0;
}
