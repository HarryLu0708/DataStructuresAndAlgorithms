#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q,k,x;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){cin>>x;v.push_back(x);}
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>k;
		vector<int>::iterator itr=lower_bound(v.begin(),v.end(),k);
		cout<<itr-v.begin()<<'\n';
	}
	return 0;
}
