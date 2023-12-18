/*
  Counting Sort:
  Counting sort is a sorting algorithm that has linear time complexity O(n+k). 
 */

#include <bits/stdc++.h>

using namespace std;

const int MAX=2000004;
#define VMAX 10000

int A[MAX],B[MAX];
int C[VMAX];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){cin>>A[i+1];C[A[i+1]]++;}//Input value and store them in C
	//Input Array A start with 1
	//C is ready!
	for(int i=1;i<=VMAX;i++)C[i]=C[i]+C[i-1];//求前缀和(if A start with 0, finding suffix will little harder)
	for(int j=1;j<=n;j++){
		B[C[A[j]]]=A[j];//C[A[j]] stores the index of the elements
		//A stores the original data so we need move orginal data to the new array B by using C[A[j]] as an index
		C[A[j]]--;//decrease suffix to avoid repeat numbers in the array A
	}
	//Output Function
	for(int i=1;i<=n;i++){
		if(i>1)cout<<' ';
		cout<<B[i];
	}
	cout<<'\n';
	return 0;
}
