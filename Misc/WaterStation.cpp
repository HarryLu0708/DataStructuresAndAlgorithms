#include <iostream>

using namespace std;

int main(){
	int d;
	cin>>d;
	int x=d/5;
	if((d-x*5)>((x+1)*5-d)){
		cout<<(x+1)*5;
	}else{
		cout<<x*5;
	}
	return 0;
}
