#include<iostream>
using namespace std;

int main(){
		std::ios::sync_with_stdio(false);std::cin.tie(0);
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			cout<<i<<'x'<<j<<'='<<i*j<<'\n';
		}
	}
	return 0;
}
