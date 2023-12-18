#include <bits/stdc++.h>

using namespace std;

int main(){
	//input lines
	int n;
	scanf("%d",&n);
	double arr1[n],arr2[n],p1=0,p2=0,p3=0,pi=-1;
	for(int i=0;i<n;i++)scanf("%lf",&arr1[i]);
	for(int i=0;i<n;i++)scanf("%lf",&arr2[i]);
	//Minkowski Distance
	for(int i=0; i<n; i++){
		double diff=arr1[i]-arr2[i];
		p1+=abs(diff);//Manhatten Distance
		p2+=diff*diff;//Euclidean Distance
		p3+=abs(diff*diff*diff);
		pi=max(pi,abs(diff));//Chebyshev Distance
	}
	//Output Lines
	printf("%.6lf\n",p1);
	printf("%.6lf\n",sqrt(p2));
	printf("%.6lf\n",cbrt(p3));
	printf("%.6lf\n",pi);
	return 0;
}
