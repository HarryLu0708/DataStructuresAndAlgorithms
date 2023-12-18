#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main(){
	double a,b,C,PI=3.1415926535;
	cin >> a >> b >> C;
	double c=sqrt(a*a+b*b-2*a*b*cos(C*PI/180));
	double L=c+a+b;
	double p=L/2;
	double A=sqrt(p*(p-a)*(p-b)*(p-c));
	double h=2*A/a;
	printf("%.5f\n",A);
	printf("%.5f\n",L);
	printf("%.5f\n",h);
	return 0;
}
