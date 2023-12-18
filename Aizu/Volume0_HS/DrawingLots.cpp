#include<bits/stdc++.h>
using namespace std;
int a[31];
int main(){
	//std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++)a[i]=i;
	int q,x,y;scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d,%d",&x,&y);
		swap(a[x],a[y]);
	}
	for(int i=1;i<=n;i++)printf("%d\n",a[i]);
	return 0;
}
