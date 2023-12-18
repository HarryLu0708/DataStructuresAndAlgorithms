#include <bits/stdc++.h>

using namespace std;

int getParent(int i){return i/2;}
int getLeftChild(int i){return i*2;}
int getRightCHild(int i){return i*2+1;}

int H[252];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>H[i];
	for(int i=1;i<=n;i++){
		cout<<"node "<<i<<": key = "<<H[i]<<", ";
		if(getParent(i)>=1)cout<<"parent key = "<<H[getParent(i)]<<", ";
		if(getLeftChild(i)<=n)cout<<"left key = "<<H[getLeftChild(i)]<<", ";
		if(getRightCHild(i)<=n)cout<<"right key = "<<H[getRightCHild(i)]<<", ";
		cout<<'\n';
	}
	return 0;
}
