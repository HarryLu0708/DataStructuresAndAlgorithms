#include <bits/stdc++.h>

using namespace std;

const int MAX=2000000;
int A[MAX+1];
int n;

void maxHeapify(int i){
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
		maxHeapify(largest);//Recurrsion
	}
}

void buildMaxHeap(){//From button to up to change then heap to max heap
	for(int i=n/2;i>=1;i--)maxHeapify(i);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>A[i];
	buildMaxHeap();
	for(int i=1;i<=n;i++)cout<<' '<<A[i];
	cout<<'\n';
	return 0;
}
