/*
  Quick Sort
 */

#include <bits/stdc++.h>

using namespace std;

struct Card{
	char s;
	int n;
};


Card A[100000];//Inititalized
Card B[100000];
#define MAX 100000

Card L[MAX/2+2],R[MAX/2+2];


//Partition Function: 
int partition(Card A[],int p, int r){
	Card x=A[r];//select pivot
	int i=p-1;
	for(int j=p;j<r;j++){//traverse p to r range
		if(A[j].n<=x.n){
			i++;
			swap(A[i],A[j]);//Partition
		}
	}
	swap(A[i+1],A[r]);//swap the pivot point and the 1st element in the part 2 of the sequence
	return i+1;//return the index of pivot
}

void sort(Card A[],int p, int r){
	if(p<r){
		int q=partition(A,p,r);
		sort(A,p,q-1);
		sort(A,q+1,r);
	}
}

void merge(Card A[],int left, int mid, int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=A[left+i];
	for(int i=0;i<n2;i++)R[i]=A[mid+i];
	L[n1].n=R[n2].n=2000000000;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		if(L[i].n<=R[j].n){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
		}
		
	}
}

void mergeSort(Card A[],int left, int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

bool isStable(Card A[], Card B[],int n){
	for(int i=0;i<n;i++){
		if(A[i].s!=B[i].s)return false;
	}
	return true;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i].s>>A[i].n;
		B[i].s=A[i].s;
		B[i].n=A[i].n;
	}
		
		
	mergeSort(A,0,n);
	sort(B,0,n-1);
	if(isStable(A,B,n))cout<<"Stable\n";
	else cout<<"Not stable\n";
	for(int i=0;i<n;i++)cout<<B[i].s<<' '<<B[i].n<<'\n';
	
	return 0;
}
