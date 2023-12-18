#include<bits/stdc++.h>

using namespace std;

int a[10],b[10],c[10],d[10];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int x,y,sum,cnt=0;
	while(cin>>x>>y){
		sum=x+y;
		while(sum!=0){
			cnt++;
			sum/=10;
		}
		cout<<cnt<<'\n';
		cnt=0;
	}
	return 0;
}
