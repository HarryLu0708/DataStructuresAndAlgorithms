#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
				c++;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(i>0)cout<<' ';
		cout<<arr[i];
	}
	cout<<'\n';
	cout<<c<<'\n';
	return 0;
}
