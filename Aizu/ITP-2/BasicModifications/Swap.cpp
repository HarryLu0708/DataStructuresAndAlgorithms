#include <bits/stdc++.h>

using namespace std;

int A[1006];
//int B[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q,b,t,e;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>b>>e>>t;
		//CODE HERE
		for(int k=0; k<(e-b);k++){
			int temp=A[b+k];
			A[b+k]=A[t+k];
			A[t+k]=temp;
		}
	}
	for(int i=0; i<n; i++){
		if(i!=n-1)cout<<A[i]<<' ';
		else cout<<A[i];
	}
	cout<<endl;
}
