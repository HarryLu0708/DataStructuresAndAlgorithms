#include <bits/stdc++.h>

using namespace std;

class myStack {
	int top=-1;
	int arr[200001];
public:
	int mytop(){
		return arr[top];
	}
	void mypush(int x){
		top++;
		arr[top]=x;
	}
	void mypop(){
		top--;
	}
	bool empty(){
		if(top>=0)return true;
		else return false;
	}
};

myStack stks[1001];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,q;
	cin>>n>>q;
	for(int i=0;i<q;i++){
		int c,t,x;
		cin>>c;
		if(c==0){
			cin>>t>>x;
			stks[t].mypush(x);
		}else if(c==1){
			cin>>t;
			if(!stks[t].empty())cout<<stks[t].mytop()<<'\n';
		}else{
			cin>>t;
			stks[t].mypop();
		}
	}
	return 0;
}
