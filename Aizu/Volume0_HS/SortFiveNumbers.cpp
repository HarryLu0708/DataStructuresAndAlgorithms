#include<bits/stdc++.h>
using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	priority_queue<int> q;
	int k;
	for(int i=0;i<5;i++){
		cin>>k;
		q.push(k);
	}
	for(int i=0;i<5;i++){
		if(i)cout<<' ';
		cout<<q.top();
		q.pop();
	}
	cout<<'\n';
	return 0;
}
