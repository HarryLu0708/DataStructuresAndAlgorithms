#include <bits/stdc++.h>

using namespace std;

int A[100006];

int main(void){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	
	A[n]=A[n-1]/2;
	for(int i=0;i<n;i++){
		if(A[i]!=A[i+1]){
			cout<<A[i];
			if(i!=n-1)cout<<' ';
			else cout<<'\n';
		}
	}
	cout<<endl;
}
