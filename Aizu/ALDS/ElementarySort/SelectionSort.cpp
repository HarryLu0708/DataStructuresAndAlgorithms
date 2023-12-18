#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int min,n,c;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[min]>arr[j])min=j;
		}
		swap(arr[min],arr[i]);
		if(i!=min)c++;
	}
	for(int i=0;i<n;i++){
		if(i>0)cout<<' ';
		cout<<arr[i];
	}
	cout<<'\n';
	cout<<c<<'\n';
	return 0;
}
