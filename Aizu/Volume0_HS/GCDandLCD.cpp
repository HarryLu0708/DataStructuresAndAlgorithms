#include <bits/stdc++.h>

using namespace std;

int gcd(int x,int y){
	if(x<y)swap(x,y);
	while(y>0){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}

int lcm(int a, int b){
	return (a / gcd(a, b))*b;
}

int main(){
	int a,b;
	while(cin>>a>>b){
		cout<<gcd(a,b)<<' '<<lcm(a,b)<<'\n';
	}
	return 0;
}
