#include <bits/stdc++.h>

using namespace std;

int main(){
	double x,h;
	while(1){
		cin>>x>>h;
		if(x==0&&h==0)break;
		double hl=x/2;
		double sh=sqrt(h*h+hl*hl);
		double area=sh*x*2+x*x;
		printf("%.6lf\n",area);
	}
	return 0;
}
