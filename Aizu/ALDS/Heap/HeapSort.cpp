#include <bits/stdc++.h>

using namespace std;

const int MAX=2000000;
int x;
int n;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n;
	priority_queue<int>pq;
	for(int i=1;i<=n;i++){
		cin>>x;
		pq.push(x);
	}
	while(!pq.empty()){
		cout<<pq.top()<<' ';
		pq.pop();
	}
	return 0;
}
