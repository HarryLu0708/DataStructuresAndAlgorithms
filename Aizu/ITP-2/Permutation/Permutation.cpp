#include <bits/stdc++.h>

using namespace std;
int a[10],b[10];
int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	//Input
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	//Processing
	if(prev_permutation(a,a+n)){
		for(int i=0;i<n;i++)cout<<a[i]<<(i==n-1?'\n':' ');
	}
	for(int i=0;i<n;i++)cout<<b[i]<<(i==n-1?'\n':' ');
	if(next_permutation(b,b+n)){
		for(int i=0;i<n;i++)cout<<b[i]<<(i==n-1?'\n':' ');
	}
	return 0;
}
