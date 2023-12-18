#include <cstdio>

using namespace std;

int main(){
	int a,b,c,rect=0,diamond=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c)rect++;
		else if(a==b)diamond++;
	}
	printf("%d\n%d",rect,diamond);
	return 0;
}
