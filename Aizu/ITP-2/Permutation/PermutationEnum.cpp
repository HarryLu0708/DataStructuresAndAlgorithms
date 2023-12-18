#include <bits/stdc++.h>

using namespace std;
int a[10],b[10];
int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	//Input
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i-1]=i;
	}
	do{
		for(int i=0; i<n; i++){
			if(i!=n-1)cout<<a[i]<<' ';
			else cout<<a[i];
		}
		cout<<'\n';
	}while(next_permutation(a,a+n));
	//Process
	return 0;
}
