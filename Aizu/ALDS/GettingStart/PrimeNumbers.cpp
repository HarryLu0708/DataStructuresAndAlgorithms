#include <bits/stdc++.h>

using namespace std;

//The Sieves of Eratosthenes

bool isprime(int x){
	if(x<2)return false;
	if(x==2)return true;
	if(x%2==0)return false;
	for(int i=3;i*i<=x;i+=2){
		if(x%i==0)return false;
	}
	return true;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,count,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(isprime(x))count++;
	}
	cout<<count<<'\n';
	return 0;
}
