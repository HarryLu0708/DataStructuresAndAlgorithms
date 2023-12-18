#include <stdio.h>

using namespace std;

int main() {
	int a,b;
	double ad,bd;
	scanf("%d %d",&a,&b);
	ad=a;
	bd=b;
	printf("%d %d %.5f\n",a/b,a%b,ad/bd);
	return 0;
}

