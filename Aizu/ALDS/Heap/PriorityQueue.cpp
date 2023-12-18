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

const int INFTY=1<<30;

void heapIncreaseKey(int i,int key){
	if(key<A[i])return;//if new key smaller than current key, quit
	A[i]=key;//update key for A[i]
	while(i>1&&A[i/2]<A[i]){//update will destroy the property of max heap, so we need to move new key toward root
		//the method is compare key with the key of parent node, if new key greater than parent node key, than swap
		swap(A[i],A[i/2]);
		i=i/2;//update current index
	}
}

void insert(int key){
	n++;//size plus one
	A[n]=-INFTY;//set the end of array as a guard
	heapIncreaseKey(n,key);//set key into A[n]
}

int heapExtractMax(){
	if(n<1)return -INFTY;//the priority queue size smaller than one
	int max=A[1];
	A[1]=A[n];//update root
	n--;//update size of priority queue
	maxHeapify(1);//maintain the order in the list
	return max;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int key;
	string o;
	while(1){
		cin>>o;
		if(o=="end")break;
		else if(o=="insert"){
			cin>>key;
			insert(key);
		}else{
			cout<<heapExtractMax()<<'\n';
		}
	}
	return 0;
}
