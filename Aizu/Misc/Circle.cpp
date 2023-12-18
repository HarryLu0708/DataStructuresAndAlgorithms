#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	double r;
	//const double PI = acos(-1.0);
	scanf("%lf",&r);
	printf("%.6f %.6f\n",r*r*M_PI,2*r*M_PI);
}

