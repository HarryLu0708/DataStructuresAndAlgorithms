#include <bits/stdc++.h>

using namespace std;


int search(int a[],int as,int target){
	for(int i=0;i<as;i++){
		if(target==a[i])return 1;
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
