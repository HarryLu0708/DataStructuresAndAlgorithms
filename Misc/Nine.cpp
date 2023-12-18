#include <iostream>

using namespace std;

void nine(int a, int b){
	if(a%3==0){
		cout<<"No";
	}
	else if(b-a==1){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	
}

int main(){
	int a, b;
	cin>>a>>b;
	nine(a,b);
}
