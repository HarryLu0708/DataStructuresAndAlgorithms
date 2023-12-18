#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y,degree=90;
	double cX,cY;
	while(1){
		scanf("%d,%d",&x,&y);
		if(x==0&&y==0)break;
		cX+=x*cos(degree*M_PI/180);
		cY+=x*sin(degree*M_PI/180);
		degree-=y;
	}
	cout<<(int)cX<<endl;
	cout<<(int)cY<<endl;
	return 0;
}
