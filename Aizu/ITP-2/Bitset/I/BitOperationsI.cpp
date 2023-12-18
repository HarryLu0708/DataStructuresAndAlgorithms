#include <bits/stdc++.h>

using namespace std;

void bitOpe(long long int n){
	bitset<32> bs(n);
	//for(int j=31;j>=0;j--)cout<<bs[j];
	cout<<bs<<'\n';
	cout<<~bs<<'\n';
	cout<<(bs<<1)<<'\n';
	cout<<(bs>>1)<<'\n';
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	long long int x;
	cin>>x;
	bitOpe(x);
	
	return 0;
}
