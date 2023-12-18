/*
  PseudoCode:
  Merge(A, left, mid, right)
  n1 = mid - left;
  n2 = right - mid;
  create array L[0...n1], R[0...n2]
  for i = 0 to n1-1
  do L[i] = A[left + i]
  for i = 0 to n2-1
  do R[i] = A[mid + i]
  L[n1] = SENTINEL
  R[n2] = SENTINEL
  i = 0;
  j = 0;
  for k = left to right-1
  if L[i] <= R[j]
  then A[k] = L[i]
  i = i + 1
  else A[k] = R[j]
  j = j + 1
  
  Merge-Sort(A, left, right){
  if left+1 < right
  then mid = (left + right)/2;
  call Merge-Sort(A, left, mid)
  call Merge-Sort(A, mid, right)
  call Merge(A, left, mid, right)
 */

#include <bits/stdc++.h>

#define MAX 500000

int L[MAX/2+2],R[MAX/2+2];

int cnt;

using namespace std;

void merge(int A[], int left, int mid, int right){
	int n1=mid-left;
	int n2=right-mid;
	for(int i=0;i<n1;i++)L[i]=A[left+i];
	for(int i=0;i<n2;i++)R[i]=A[mid+i];
	L[n1]=R[n2]=2000000000;
	int i=0,j=0;
	for(int k=left;k<right;k++){
		cnt++;
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}else{
			A[k]=R[j];
			j++;
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
	for(int i=0;i<n;i++){
		if(i)cout<<' ';
		cout<<A[i];
	}
	cout<<'\n';
	cout<<cnt<<'\n';
	return 0;
}

