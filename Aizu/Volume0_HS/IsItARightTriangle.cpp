#include<bits/stdc++.h>
using namespace std;

bool isRight(int a, int b, int c){
	int A=a*a,B=b*b,C=c*c;
	if(A==B+C||B==A+C||C==A+B)return true;
	return false;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(isRight(a,b,c))cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
