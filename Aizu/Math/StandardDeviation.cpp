#include <bits/stdc++.h>

using namespace std;

double arr[1001];

int main(){
	while(true){
		int n;
		scanf("%d",&n);
		if(n==0)break;
		double sum=0;
		for(int i=0; i<n; i++){
			scanf("%lf",&arr[i]);
			sum+=arr[i];
		}
		double sum1=0;
		for(int i=0; i<n; i++){
			sum1+=((arr[i]-(sum/n))*(arr[i]-(sum/n)))/n;
		}
		double res=sqrt(sum1);
		printf("%.8lf\n",res);
	}
	return 0;
}
