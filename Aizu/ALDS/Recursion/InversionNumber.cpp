/*
  Inversion Number and Merge Sort:
  Use Merge sort with modification that every time an unsorted pair is found increment count by one and return count at the end.
  
 */

#include <bits/stdc++.h>

#define MAX 500000

int L[MAX/2+2],R[MAX/2+2];

long long int cnt;

using namespace std;

void merge(int A[], int left, int mid, int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=A[left+i];
	for(int i=0;i<n2;i++)R[i]=A[mid+i];
	L[n1]=R[n2]=2000000000;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
			cnt+=n1-i;
		}
		
	}
}

void mergeSort(int A[], int left, int right){
	if(left+1<right){
		int mid=(left+right)/2;
		mergeSort(A,left,mid);
		mergeSort(A,mid,right);
		merge(A,left,mid,right);
	}
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int A[MAX];
	cnt=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	mergeSort(A,0,n);
	cout<<cnt<<'\n';
	return 0;
}

