#include <iostream>

using namespace std;

const int N = 1e6+10;

int n;
int q[N]; 
int tmp[N];

void sort(int q[], int l, int r){
	
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++)scanf("%d",&q[i]);
	
	sort(q,0,n-1);
	
	for(int i=0; i<n; i++)printf("%d",q[i]);
	return 0;
}

