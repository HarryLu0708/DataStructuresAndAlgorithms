#include <iostream>
#include <bitset>

using namespace std;

bitset<10000> bs;

int main(){	
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int l,m,u,v;
	cin>>l>>m;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		for(int j=u;j<=v;j++){
			bs[j]=true;	
		}
	}
	int cnt=0;
	for(int i=0;i<=l;i++){
		if(bs[i]==false)cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
