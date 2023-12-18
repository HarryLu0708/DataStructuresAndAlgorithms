#include<bits/stdc++.h>
using namespace std;

int a[10];

void insert(){
	for(int i=0;i<10;i++)cin>>a[i];
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]<a[j])swap(a[i],a[j]);
		}
	}
	cout<<a[0]<<'\n'<<a[1]<<'\n'<<a[2]<<'\n';
}

void heap(){
	int x;
	priority_queue<int> pq;
	for(int i=0;i<10;i++){
		cin>>x;
		pq.push(x);
	}
	cout<<pq.top()<<'\n';
	pq.pop();
	cout<<pq.top()<<'\n';
	pq.pop();
	cout<<pq.top()<<'\n';
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	heap();
	return 0;
}
