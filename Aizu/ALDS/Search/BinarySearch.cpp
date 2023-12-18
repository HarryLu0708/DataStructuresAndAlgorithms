#include <bits/stdc++.h>

using namespace std;


int search(int a[],int as,int target){
	int l=0,r=as;
	while(l<r){
		int mid=(l+r)/2;
		if(a[mid]==target)return 1;
		else if(a[mid]>target)r=mid;
		else l=mid+1;
	}
	return 0;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,m;
	cin>>n;
	int a[n],b,sum=0;
	for(int i=0;i<n;i++)cin>>a[i];
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b;
		sum+=search(a,n,b);
	}
	cout<<sum<<endl;
	
	return 0;
}
