#include <bits/stdc++.h>

using namespace std;

int A[1006];
int B[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q,b,m,e;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>b>>m>>e;
		//CODE HERE
		for(int k=0; k<e-b;k++)B[k]=A[b+k];
		for(int i=0; i<e-b;i++){
			int j=(i+e-m)%(e-b);
			A[b+j]=B[i];
		}
	}
	for(int i=0; i<n; i++){
		if(i!=n-1)cout<<A[i]<<' ';
		else cout<<A[i];
	}
	cout<<endl;
}
