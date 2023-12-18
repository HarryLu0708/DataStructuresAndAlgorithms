#include <cstdio>

using namespace std;

int main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	int arr[x][y][z];
	//Initialize
	for(int i=0; i<x; i++)
		for(int j=0; j<y; j++)
			for(int k=0; k<z; k++)arr[i][j][k]=0;
	//input points n
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		int xi,yi,zi;
		scanf("%d %d %d",&xi,&yi,&zi);
		arr[xi][yi][zi]=1;
	}
	//Input Query q
	int q;
	scanf("%d",&q);
	for(int i=0; i<q; i++){
		int xq,yq,zq;
		scanf("%d %d %d",&xq,&yq,&zq);
		if(xq<0||xq>x||yq<0||yq>y||zq<0||zq>z){
			printf("0\n");
			continue;
		}
		printf("%d\n",arr[xq][yq][zq]);
	}
	return 0;
}
