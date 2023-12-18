#include <iostream>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	if(n%2==0)cout<<"Bob";
	else cout<<"Alice";
	return 0;
}
