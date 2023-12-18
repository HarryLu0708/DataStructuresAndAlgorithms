#include <cstdio>

using namespace std;

int main(){
	int price,count,totalMoney=0,totalCount=0,i=0;
	while(scanf("%d,%d",&price,&count)!=EOF){
		totalCount+=count;
		totalMoney+=price*count;
		i++;
	}
	double a=(double)totalCount/i;
	printf("%d\n%d\n",totalMoney,(int)(0.5+a));
	return 0;
}
