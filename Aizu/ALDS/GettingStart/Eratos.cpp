#include <bits/stdc++.h>

using namespace std;
const int MAX=1e8+2;
bitset<MAX> bs;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int j,x,n,c;
	bs[0]=bs[1]=true;
	for(int i=2;i<MAX;i++){
		if(!bs[i]){
			j=i+i;
			while(j<MAX){
				bs[j]=true;
				j+=i;
			}
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(bs[x])c++;
	}
	cout<<c<<'\n';
	return 0;
}
