#include <iostream>

using namespace std;

int objectPartisions(int n, int m);

int main(){
	cout<<objectPartisions(6,6)<<endl;
	return 0;
}

int objectPartisions(int n, int m){
	if(n==0){
		return 1;
	}
	if(m==0||n<0){
		return 0;
	}
	return objectPartisions(n-m,m)+objectPartisions(n,m-1);
}
