#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;
/*
bool b_search(vector<int> v, int target){
	int l=0,r=v.size()-1;
	while(l>r){
		int mid=(l+r)/2;
		if(v[mid]==target)return true;
		else if(v[mid]>target)l=mid+1;
		else r=mid;
	}
	return false;
}
 */

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,t;
	vector<int> v; set<int> s;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		v.push_back(t);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<(int)v.size();i++){
		for(int j=i+1;j<(int)v.size();j++){
			if(find(v.begin(),v.end(),v[i]+v[j])!=v.end())s.insert(v[i]+v[j]);
		}
	}
	cout<<s.size()<<endl;
	return 0;
}
