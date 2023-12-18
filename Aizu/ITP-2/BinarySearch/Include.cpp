#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	vector<int> arr,brr;
	int n,x;
	cin>>n;
	for(int i=0; i<n; i++){cin>>x;arr.push_back(x);}
	int m;
	cin>>m;
	for(int i=0;i<m;i++){cin>>x;brr.push_back(x);}
	if(includes(arr.begin(),arr.end(),brr.begin(),brr.end()))cout<<'1'<<'\n';
	else cout<<'0'<<'\n';
	return 0;
}
