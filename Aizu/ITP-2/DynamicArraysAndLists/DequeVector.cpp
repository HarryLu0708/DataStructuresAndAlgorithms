#include <bits/stdc++.h>

using namespace std;

class Deque{
private:
	vector<int> v;
public:
	void push(int d, int x){
		if(d==0)v.insert(v.begin(),x);
		else v.push_back(x);
	}
	void pop(int d){
		if(d==0)v.pop_back();
		else v.erase(v.begin());
	}
	int randomAccess(int p){
		return v[p];
	}
};

int main(){
	Deque dq;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int t;
		cin>>t;
		switch (t) {
		case 0:
			int d,x;
			cin>>d>>x;
			dq.push(d,x);
			break;
		case 1:
			int p;
			cin>>p;
			cout<<dq.randomAccess(p)<<'\n';
			break;
		case 2:
			int y;
			cin>>y;
			dq.pop(y);
			break;
		}
	}
	return 0;
}
