#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	bitset<64> bs(0);
	int q,o,i,len;
	cin>>q;
	for(int j=0;j<q;j++){
		cin>>o;
		switch (o) {
		case 0:
			cin>>i;
			cout<<bs.test(i)<<'\n';
			break;
		case 1:
			cin>>i;
			bs[i]=1;
			break;
		case 2:
			cin>>i;
			bs[i]=0;
			break;
		case 3:
			cin>>i;
			bs.flip(i);
			break;
		case 4:
			if(bs.all())cout<<1<<'\n';
			else cout<<0<<'\n';
			break;
		case 5:
			if(bs.any())cout<<1<<'\n';
			else cout<<0<<'\n';
			break;
		case 6:
			if(bs.none())cout<<1<<'\n';
			else cout<<0<<'\n';
			break;
		case 7:
			cout<<bs.count()<<'\n';
			break;
		case 8:
			cout<<bs.to_ulong()<<'\n';
			break;
		}
	}
	
	return 0;
}
