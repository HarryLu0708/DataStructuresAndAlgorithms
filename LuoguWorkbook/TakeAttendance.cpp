#include <iostream>
#include <vector>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int x,m,n;
	vector<int> v;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<m;i++){
		cin>>x;
		cout<<v[x-1]<<endl;
	}
	return 0;
}
