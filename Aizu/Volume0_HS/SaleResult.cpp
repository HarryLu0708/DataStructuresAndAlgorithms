#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	long long int p,q,i,n;
	map<int,long long int> mp;vector<int> v;
	while(cin>>n){
		if(n==0)break;
		mp.clear();v.clear();
		for(int j=0;j<n;j++){
			cin>>i>>p>>q;
			if(mp.count(i))mp[i]+=p*q;
			else {
				mp[i]=p*q;
				v.push_back(i);
			}
		}
		bool t=true;
		for(int k=0;k<(signed)v.size();k++){
			if(mp[v[k]]>=1000000){
				cout<<v[k]<<endl;
				t=false;
			}
		}
		if(t)cout<<"NA"<<endl;
	}
	return 0;
}
