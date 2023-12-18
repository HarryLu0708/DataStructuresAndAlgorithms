#include <bits/stdc++.h>

using namespace std;

struct Quest{
	int time;
	string name;
};

int min(int a,int b){return a<b?a:b;}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	queue<Quest> q;
	int n,c,i,time=0;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		Quest o;
		cin>>o.name>>o.time;
		q.push(o);
	}
	while(!q.empty()){
		Quest tmp=q.front();
		i=min(c,tmp.time);
		tmp.time-=i;
		time+=i;
		q.pop();
		if(tmp.time<=0){
			cout<<tmp.name<<' '<<tmp.time<<'\n';
		}else{
			q.push(tmp);
		}
	}
	return 0;
}
