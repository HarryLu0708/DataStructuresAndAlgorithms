#include <iostream>

using namespace std;

int sum(int n);

int main(){
	cout<<sum(5)<<endl;
	return 0;
}


int sum(int n){
	return (n==0)?0:n+sum(n-1);
}
