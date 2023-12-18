#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	
	int q;
	list<int> l;
	list<int>::iterator it=l.begin();
	cin>>q;
	for(int i=0; i<q; i++){
		int a,b;
		cin>>a;
		if(a<2)cin>>b;
		if(!a)it=l.insert(it,b);
		else if(a==1){
			for(int i=0;i<abs(b);i++){
				if(b<0)it--;
				else it++;
			}
		}
		else it=l.erase(it);
	}
	it=l.begin();
	for(;it!=l.end();it++)cout<<*it<<'\n';
	return 0;

}
