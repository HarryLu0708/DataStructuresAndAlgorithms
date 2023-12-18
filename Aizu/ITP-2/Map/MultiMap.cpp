#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	multimap<string,int> s;
	string key,l,r;
	int o,x,q;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>o;
		switch (o) {
		case 0://inser a pair
			cin>>key>>x;
			s.insert({key,x});
			break;
		case 1://Print all element in key position
			{
				cin>>key;
				pair<multimap<string,int>::iterator,multimap<string,int>::iterator> range=s.equal_range(key);//Set a temp pair to store the datas in the multimap
				while(range.first!=range.second){
					cout<<range.first->second<<'\n';
					range.first++;
				}
				break;
			}
		case 2://erase a pair
			cin>>key;
			s.erase(key);
			break;
		case 3://Print all elements in a specific range
			cin>>l>>r;
			multimap<string,int>::iterator left=s.lower_bound(l);
			multimap<string,int>::iterator right=s.upper_bound(r);
			while(left!=right){
				cout<<((*left).first).c_str()<<' '<<(*left).second<<'\n';
				left++;
			}
			break;
		}
	}
	return 0;
}
