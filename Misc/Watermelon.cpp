#include <cstdio>

int main(){
	//std::ios::sync_with_stdio(false);std::cin.tie(0);
	int w;
	scanf("%d",&w);
	if(w%2==0&&w>2){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}
