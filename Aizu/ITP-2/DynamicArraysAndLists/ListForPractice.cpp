#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	
	int q;
	list<int> v;
	list<int>::iterator it=v.begin();
	cin>>q;
	for(int i=0; i<q; i++){
		int a,b;
		cin>>a;
		switch (a) {
		case 0:
			cin>>b;
			it=v.insert(it,b);
			break;
		case 1:
			cin>>b;
			for(int j=0; j<abs(b); j++){
				if(b>0)it++;
				else it--;
			}
			break;
		case 2:
			v.erase(it);
			break;
		}
	}
	it=v.begin();
	//cout the list
	for(;it!=v.end();it++)cout<<*it<<'\n';
	return 0;
	
}
