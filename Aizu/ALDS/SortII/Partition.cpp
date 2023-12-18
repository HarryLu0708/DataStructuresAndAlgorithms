#include <bits/stdc++.h>

using namespace std;

int A[100000];

int partition(int p, int r){
	int x=A[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(A[j]<=x){
			i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}



int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	int q=partition(0,n-1);
	for(int i=0;i<n;i++){
		if(i)cout<<' ';
		if(i==q)cout<<'[';
		cout<<A[i];
		if(i==q)cout<<']';
	}
	cout<<'\n';
	return 0;
}
