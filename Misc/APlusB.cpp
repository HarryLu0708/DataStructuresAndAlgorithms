#include <iostream>

using namespace std;

int aplusb(int x,int y);

int main(){
	int a,b;
	cin>>a>>b;
	cout<<aplusb(a,b)<<endl;
	return 0;
}

int aplusb(int x, int y){
	if(x==0){
		return y;
	}
	if(y==0){
		return x;
	}
	int a=x^y;
	int b=(x&y)<<1;
	return aplusb(a,b);
}
