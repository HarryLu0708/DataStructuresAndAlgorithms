#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int t,n;
	cin>>n;
	vector<int> v1,v2;
	for(int i=0;i<n;i++){
		cin>>t;
		v1.push_back(t);
		v2.push_back(t);
	}
	sort(v1.begin(),v1.end());
	for(int i=0;i<n;i++){
		int x=v2[i];
		for(int j=0;j<n;j++){
			if(x==v1[j]){cout<<j+1<<endl;break;}
		}
	}
	return 0;
}
