#include <cstdio>

using namespace std;

int main(){
	char t[3];int n,a=0,b=0,ab=0,o=0;
	while(scanf("%d,%s",&n,t)!=EOF){
		if(t[1]=='B')ab++;
		else if(t[0]=='A')a++;
		else if(t[0]=='B')b++;
		else if(t[0]=='O')o++;
	}
	printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
}
