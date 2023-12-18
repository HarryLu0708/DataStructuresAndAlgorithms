#include <bits/stdc++.h>

using namespace std;
int arr[100];
int main () {
	int n,q;
	cin>>n>>q;
	for(int i=0; i<q; i++){
		int l,r;
		cin>>l>>r;
		for(int i=l; i<=r;i++)arr[i]++;
	}
	for(int i=0; i<n; i++)cout<<arr[i]<<endl;
}
