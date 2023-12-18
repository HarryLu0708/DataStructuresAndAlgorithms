#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,k,b,q,o,i;
	bitset<64> bs(0);
	cin>>n;
	vector<bitset<64>> v(n,bitset<64>(0));
	for(int j=0;j<n;j++){
		cin>>k;
		for(int l=0;l<k;l++){
			cin>>b;
			v[j][b]=1;
		}
	}
	cin>>q;
	for(int j=0;j<q;j++){
		cin>>o>>i;
		switch (o) {
		case 0:
			cout<<bs[i]<<'\n';
			break;
		case 1:
			bs|=v[i];
			break;
		case 2:
			bs&=~v[i];
			break;
		case 3:
			bs^=v[i];
			break;
		case 4:
			cout<<(bs|~v[i]).all()<<'\n';
			break;
		case 5:
			cout<<(bs&v[i]).any()<<'\n';
			break;
		case 6:
			cout<<(bs&v[i]).none()<<'\n';
			break;
		case 7:
			cout<<(bs&v[i]).count()<<'\n';
			break;
		case 8:
			cout<<(bs&v[i]).to_ulong()<<'\n';
			break;
		}
	}
	return 0;
}
