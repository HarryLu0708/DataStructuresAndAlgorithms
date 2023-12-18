#include <bits/stdc++.h>

using namespace std;

int A[2005];
int n;

bool search(int i,int m){
	//i:element i; m:target; n:array length
	if(m==0)return true;//search sucessed
	if(i>=n)return false;//search failed
	return search(i+1,m)||search(i+1,m-A[i]);//choose use i-th element to calculate or not choose i-th element to calculate
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];
	int x,q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>x;
		//start with 0th element
		if(search(0,x))cout<<"yes"<<'\n';
		else cout<<"no"<<'\n';
	}
	return 0;
}
