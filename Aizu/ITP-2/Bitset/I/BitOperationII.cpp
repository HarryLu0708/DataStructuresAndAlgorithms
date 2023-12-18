#include <bits/stdc++.h>

using namespace std;

void bitOpe(long long int x, long long int y){
	bitset<32> bs1(x),bs2(y);
	cout<<(bs1&bs2)<<'\n';
	cout<<(bs1|bs2)<<'\n';
	cout<<(bs1 xor bs2)<<'\n';

}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	long long int x,y;
	cin>>x>>y;
	bitOpe(x,y);
	
	return 0;
}
