#include <cstdio>
#include <algorithm>

using namespace std;

struct Group{
	int code,score;
};

Group a[40];

int main(){
	int i=0,c,s;
	while(1){
		scanf("%d,%d",&c,&s);
		if(c==0&&s==0)break;
		a[i].code=c;
		a[i].score=s;
		i++;
	}
	for(int j=0;j<i-1;j++){
		for(int k=j+1;k<i;k++){
			if(a[j].score<a[k].score)swap(a[j],a[k]);
		}
	}
	int q;
	while(scanf("%d",&q)!=EOF){
		printf("%d\n",a[q].code);
	}
	return 0;
}
