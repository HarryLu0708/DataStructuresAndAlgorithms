#include <bits/stdc++.h>

using namespace std;

//This algorithm is based on the Euclidean Algorithm:
//when x>=y, gcd(x,y) equal to gcd(y,the remainder of x/y)

int gcd(int x,int y){
	if(x<y)swap(x,y);//Swap x,y if x<y to keep x always bigger than y
	while(y>0){
		int r=x%y;//Find remainder
		x=y;//transfer x to y
		y=r;//y to r
	}
	return x;
}

int rgcd(int x,int y){//Recursive Version
	if(y==0)return x;
	return rgcd(y,x%y);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int x,y;
	cin>>x>>y;
	cout<<rgcd(x,y)<<'\n';
	return 0;
}
