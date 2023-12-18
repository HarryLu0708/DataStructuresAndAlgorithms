#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	vector<int> v;
	int s_len=s.size();
	int t_len=t.size();
	for(int i=0;i<s_len-t_len+1;i++){
		bool flag=true;
		for(int j=i,k=0;k<t_len;j++,k++){
			if(s[j]!=t[k])flag=false;
		}
		if(flag)v.push_back(i);
	}
	if(v.size()>0){
		for(int i=0;i<(int)v.size();i++)cout<<v[i]<<'\n';
	}
	return 0;
}
