#include <bits/stdc++.h>

using namespace std;

const int MAX=2000000;
int A[MAX+1];
int n;

void maxHeapify(int i, int n){
	//Find the left child node and right child node of the current node
	int l=2*i;
	int r=2*i+1;
	int largest;
	//Find the largest one btw r,l,i
	if(l<=n&&A[l]>A[i])largest = l;
	else largest = i;
	if(r<=n&&A[r]>A[largest])largest=r;
	//If largest node isnt current node then swap largest node and current node 
	if(largest!=i){
		swap(A[i],A[largest]);
		maxHeapify(largest,n);//Recurrsion
	}
}

void heapSort(){
	for(int i=n/2;i>0;--i)maxHeapify(i,n);
	for(int i=n;i>1;--i){
		swap(A[i],A[1]);
		maxHeapify(1,i-1);
	}
}

void solve(int *a,int n){
	int i,j,p;
	for(i=1;i<=n;++i){
		j=i-1;
		p=j/2;
		while(p>=1){
			swap(a[j],a[p]);
			j=p;
			p=j/2;
		}
		swap(a[1],a[i]);
	}
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)cin>>A[i];
	heapSort();
	//solve(A,n);
	for(int i=1;i<n;++i)cout<<A[i]<<' ';
	cout<<A[n]<<'\n';
	return 0;
}
