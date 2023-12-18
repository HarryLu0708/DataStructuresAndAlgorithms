#include <bits/stdc++.h>

using namespace std;

int main(){
	double x1,y1,x2,y2;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	double a=x2-x1,b=y2-y1;
	double r=sqrt(a*a+b*b);
	printf("%.8lf\n",r);
	return 0;
}
