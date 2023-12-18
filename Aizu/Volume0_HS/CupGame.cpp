#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	int A=1,B=0,C=0;
	char s1,s2;
	while(scanf("%c,%c",&s1,&s2)!=EOF){
		if(s1=='A'&&s2=='B')swap(A,B);
		else if(s1=='A'&&s2=='C')swap(A,C);
		else if(s1=='B'&&s2=='A')swap(A,B);
		else if(s1=='B'&&s2=='C')swap(C,B);
		else if(s1=='C'&&s2=='A')swap(A,C);
		else if(s1=='C'&&s2=='B')swap(C,B);
	}
	if(A==1)printf("A\n");
	else if(B==1)printf("B\n");
	else printf("C\n");
	return 0;
}
