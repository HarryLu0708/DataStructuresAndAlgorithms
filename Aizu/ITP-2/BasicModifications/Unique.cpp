#include <bits/stdc++.h>

using namespace std;

int A[100000];
int B[100000];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	//algo
	int t=A[0];
	B[0]=t;
	int bin=1;
	for(int i=1; i<n; i++){
		//cout<<"Compare:"<<t<<' '<<A[i]<<endl;
		if(t!=A[i]){
			B[bin]=A[i];
			t=B[bin];
			bin++;
		}
	}
	
	for(int i=0; i<bin; i++){
		if(i!=bin-1)cout<<B[i]<<' ';
		else cout<<B[i];
	}
	cout<<endl;
}
