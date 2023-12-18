#include <iostream>

using namespace std;

int arr[1000004];
int n;
int search(int target){
	int l=0,r=n-1;
	while(l<r){
		int mid=l+(r-l)/2;
		if(arr[mid]>=target)r=mid;
		else l=mid+1;
	}
	if(arr[l]==target)return l+1;
	else return -1;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i];
	int x;
	for(int i=0;i<m;i++){
		cin>>x;
		if(i)cout<<' ';		
		cout<<search(x);
	}
	return 0;
}
