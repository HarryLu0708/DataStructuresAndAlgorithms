#include <bits/stdc++.h>

using namespace std;

int A[1006];
int B[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,m;//Init and Input
	cin>>n;
	for(int i=0; i<n; i++)cin>>A[i];
	cin>>m;
	for(int i=0; i<m; i++)cin>>B[i];
	int aIndex=0,bIndex=0;//Set Index
	while(aIndex<n&&bIndex<m&&A[aIndex]==B[bIndex]){//Compare len&exclude equal ele
		aIndex++;
		bIndex++;
	}
	if(aIndex<n&&bIndex<m){//compare
		if(A[aIndex]<B[bIndex])cout<<'1'<<'\n';
		else cout<<'0'<<'\n';
	}else if(aIndex==n&&bIndex<m)cout<<'1'<<'\n';//a_len<b_len: B
	else if(aIndex<n&&bIndex==m)cout<<'0'<<'\n';//a_len>b_len: A
	else cout<<'0'<<'\n';
	return 0;
}
