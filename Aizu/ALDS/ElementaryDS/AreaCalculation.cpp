#include <bits/stdc++.h>

using namespace std;

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	stack<int> stkI;
	stack<pair<int,int>> stkII;
	char ch;
	int sum=0;
	for(int i=0;cin>>ch;i++){
		if(ch=='\\')stkI.push(i);
		else if(ch=='/'&&stkI.size()>0){
			int j=stkI.top();stkI.pop();
			int a=i-j;
			sum+=a;
			while(stkII.size()>0&&stkII.top().first>j){a+=stkII.top().second;stkII.pop();}
			stkII.push({j,a});
		}
	}
	
	vector<int> ans;
	while(stkII.size()>0){ans.push_back(stkII.top().second);stkII.pop();}
	reverse(ans.begin(),ans.end());
	cout<<sum<<'\n'<<ans.size();
	int l=ans.size();
	for(int i=0;i<l;i++){
		cout<<' '<<ans[i];
	}
	cout<<'\n';
	return 0;
}
