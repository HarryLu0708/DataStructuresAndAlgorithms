#include <iostream>

using namespace std;

int fib(int n);

int main(){
	cout<<fib(7)<<endl;
	return 0;
}

int fib(int n){
	int f=0, g=1;
	while(0<n--){
		g += f;
		f = g-f;
	}
	return f;
}
