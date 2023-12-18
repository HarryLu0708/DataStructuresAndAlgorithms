#include <bits/stdc++.h>

using namespace std;

struct Pair{
	int x,y;
	Pair(int xx, int yy){
		x=xx;
		y=yy;
	}
	bool operator<(const struct Pair &arg) const{
		if(x!=arg.x)return x<arg.x;
		else return y<arg.y;
	}
};

vector<Pair> arr;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n,x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		arr.push_back(Pair(x,y));
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)cout<<arr[i].x<<' '<<arr[i].y<<'\n';
	return 0;
}
