#include <stdio.h>
using namespace std;

int main() {
	int w,h;
	while(true){
		scanf("%d %d",&w,&h);
		if(w==0&&h==0)break;
		for(int i=0; i<h; i++){
			for(int j=0; j<w; j++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
}


