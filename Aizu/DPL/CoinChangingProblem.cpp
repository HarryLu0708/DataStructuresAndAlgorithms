#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int n,m,t;
	vector<int> v;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>t;v.push_back(t);
	}
	sort(v.begin(),v.end());
	int r=0;
	int tt=v.size()-1;
	while(n>0&&tt>=0){
		int cur=v[tt];
		if(cur>n){tt--;continue;}
		int rem=n%cur;
		int cnt=(n-rem)/cur;
		r+=cnt;
		n-=cnt*cur;
		tt--;
	}
	cout<<r<<endl;
	return 0;
}
