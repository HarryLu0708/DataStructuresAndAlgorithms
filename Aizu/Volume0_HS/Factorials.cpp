#include<bits/stdc++.h>
using namespace std;

long long int fact(long long int x){
	if(x==1)return 1;
	return x*fact(x-1);
}

int main(){
	long long int x;
	cin>>x;
	cout<<fact(x)<<'\n';
	return 0;
}
