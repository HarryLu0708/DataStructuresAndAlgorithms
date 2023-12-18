#include <bits/stdc++.h>

using namespace std;

int A[1006];
int B[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	cin>>q;
	for(int i=0; i<q; i++){
		int b,e;
		cin>>b>>e;
		int xin=b,yin=e-1;
		while(xin<yin){
			swap(A[xin],A[yin]);
			xin++;yin--;
		}
	}
	for(int i=0; i<n; i++){
		if(i!=n-1)cout<<A[i]<<' ';
		else cout<<A[i];
	}
	cout<<endl;
}
