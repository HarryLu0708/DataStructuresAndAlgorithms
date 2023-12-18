#include<bits/stdc++.h>

using namespace std;

typedef struct pp{
	char name[100];
	int t;
}P;

const int l=100005;
P Q[l];
int head,tail,n;

void enqueue(P x){
	Q[tail]=x;
	tail=(tail+1)%l;
}

P dequeue(){
	P x=Q[head];
	head=(head+1)%l;
	return x;
}

int min(int a,int b){return a<b?a:b;}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int elps=0,c;
	int i,q;
	P u;
	cin>>n>>q;
	for(i=1;i<n+1;i++)cin>>Q[i].name>>Q[i].t;
	head=1;tail=n+1;
	while(head!=tail){
		u=dequeue();
		c=min(q,u.t);
		u.t-=c;
		elps+=c;
		if(u.t>0)enqueue(u);
		else cout<<u.name<<' '<<elps<<'\n';
	}
	return 0;
}





