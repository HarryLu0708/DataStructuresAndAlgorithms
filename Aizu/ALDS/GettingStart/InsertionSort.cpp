#include <bits/stdc++.h>

using namespace std;

int arr[106];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		for(int k=0;k<n;k++){
			if(k!=n-1)cout<<arr[k]<<' ';
			else cout<<arr[k];
		}
		cout<<'\n';
	}
	return 0;
}
