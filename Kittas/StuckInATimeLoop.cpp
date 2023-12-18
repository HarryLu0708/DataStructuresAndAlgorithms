#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i!=n-1)cout<<i+1<<" Abracadabra\n";
		else cout<<i+1<<" Abracadabra";
	}
	return 0;
}
