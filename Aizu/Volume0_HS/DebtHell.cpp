#include<bits/stdc++.h>
using namespace std;

int roundUp(int l){
	int t=l%1000;
	if(t>0)return l-t+1000;
	return l;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int x,loan=100000;cin>>x;
	for(int i=0;i<x;i++){
		loan+=loan*0.05;
		loan=roundUp(loan);
	}
	cout<<loan<<'\n';
	return 0;
}
