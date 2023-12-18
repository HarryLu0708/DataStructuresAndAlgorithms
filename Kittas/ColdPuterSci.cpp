#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,k,r=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		if(k<0)r++;
	}
	cout<<r;
	return 0;
}
