#include <cstdio>

using namespace std;

int main(){
	double a;
	while(scanf("%lf",&a)!=EOF){
		double current=a;
		double sum=a;
		for(int i=2;i<=10;i++){
			if(i%2==1){
				current/=3.0;
				sum+=current;
			}else{
				current*=2.0;
				sum+=current;
			}
		}
		printf("%.8lf\n",sum);
	}	
	return 0;
}
