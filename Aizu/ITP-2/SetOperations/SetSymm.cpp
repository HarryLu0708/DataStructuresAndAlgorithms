#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,m,x;
	vector<int> v1,v2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		v1.push_back(x);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		v2.push_back(x);
	}
	vector<int> diff;
	
	set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(),inserter(diff, diff.begin()));
	int len=diff.size();
	for(int i=0;i<len;i++)cout<<diff[i]<<'\n';
	return 0;
}
