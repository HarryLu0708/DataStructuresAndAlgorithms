#include <iostream>

using namespace std;

int gridPath(int n, int m);

int main(){
	cout<<gridPath(3,3)<<endl;
	return 0;
}

int gridPath(int n,int m){
	return (n==1||m==1)?1:gridPath(n-1,m)+gridPath(n,m-1);
}
