#include <iostream>

using namespace std;

void call(int n){
	int i = 1;
	CHECK_NUM:
	int x = i;
	if ( x % 3 == 0 ){
		cout << " " << i;
		goto END_CHECK_NUM;
	}
	INCLUDE3:
	if ( x % 10 == 3 ){
		cout << " " << i;
		goto END_CHECK_NUM;
	}
	x /= 10;
	if ( x ) goto INCLUDE3;
	END_CHECK_NUM:
	if ( ++i <= n ) goto CHECK_NUM;
	
	cout << endl;
}
//test: 30
int main(){
	int n;
	cin>>n;
	call(n);
	return 0;
}
