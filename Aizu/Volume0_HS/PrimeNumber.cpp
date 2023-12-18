#include<bits/stdc++.h>
using namespace std;

const int n=1000005;
bool isprime[n];
int table[n];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	for(int i=0;i<n;i++){
		isprime[i]=true;
		table[i]=0;
	}	
	isprime[0]=isprime[1]=false;
	for(int i=2;i<n;i++){
		if(isprime[i]){
			int j=i+i;
			while(j<n){
				isprime[j]=false;
				j=j+i;
			}
		}
	}
	table[1]=0;
	for(int i=2;i<n;i++){
		if(isprime[i])table[i]=1;
		table[i]+=table[i-1];
	}
	int x;
	while(cin>>x){
		cout<<table[x]<<'\n';
	}
	return 0;
}
