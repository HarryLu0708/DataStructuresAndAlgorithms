#include <bits/stdc++.h>

using namespace std;

int arr[1006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q,com,b,e,x;
	cin>>n;
	for(int i=0; i<n; i++)cin>>arr[i];
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>com>>b>>e;
		//0:min; 1:max
		if(com==0){
			x=arr[b];
			for(int j=b+1;j<e;j++){
				if(arr[j]<x)x=arr[j];
			}
		}else{
			x=arr[b];
			for(int j=b+1;j<e;j++){
				if(arr[j]>x)x=arr[j];
			}
		}
		cout<<x<<'\n';
	}
	return 0;
}
