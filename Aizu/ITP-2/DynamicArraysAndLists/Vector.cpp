#include <bits/stdc++.h>

using namespace std;

class Vector{
private:
	int arr[200000];
	int n=-1;
public:
	void pushBack(int x){
		n++;
		arr[n]=x;
	}
	void popBack(){
		n--;
	}
	int randomAccess(int x){
		return arr[x];
	}
};

int main(){
	Vector v;
	int q;
	cin>>q;
	int x;
	for(int i=0; i<q;i++){
		int t;
		cin>>t;
		switch (t) {
		case 0://pushback
			cin>>x;
			v.pushBack(x);
			break;
		case 1://randomaccess
			cin>>x;
			cout<<v.randomAccess(x)<<'\n';
			break;
		case 2:
			v.popBack();
			break;
		}
	}
	return 0;
}
