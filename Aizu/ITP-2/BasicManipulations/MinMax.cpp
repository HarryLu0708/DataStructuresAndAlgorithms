#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	int arr[3]={a,b,c};
	int x=arr[0];
	for(int i=1; i<3; i++){
		if(arr[i]<x)x=arr[i];
	}
	cout<<x<<' ';
	x=arr[0];
	for(int i=1; i<3; i++){
		if(arr[i]>x)x=arr[i];
	}
	cout<<x<<'\n';
	return 0;
}
