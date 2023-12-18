#include <bits/stdc++.h>

using namespace std;

int arr[100006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0; i<n; i++)cin>>arr[i];
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		int x;
		cin>>x;
		int a=0,b=n-1,mid;
		while(a<=b){
			mid=(a+b)/2;
			if(arr[mid]==x){
				cout<<1<<'\n';
				break;
			}else if(arr[mid]>x)b=mid-1;
			else a=mid+1;
		}
		if(arr[mid]!=x)cout<<0<<'\n';
	}
	return 0;
}
