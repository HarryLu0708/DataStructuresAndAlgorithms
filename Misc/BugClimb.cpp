#include <iostream>

using namespace std;

int bugClimb(int n, int u, int d){
	int times=0;
	while(n>0){
		n-=u;
		n+=d;
		times++;
	}
	return times;
}

int main(){
	int n,u,d;
	cin>>n>>u>>d;
	cout<<bugClimb(n,u,d);
	
	return 0;
}



