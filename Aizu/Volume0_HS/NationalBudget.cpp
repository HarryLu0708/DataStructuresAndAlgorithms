#include <bits/stdc++.h>

using namespace std;

vector<int> add(vector<int> A, vector<int> B){
	vector<int> C;
	int t=0;
	for(int i=0;i<(int)A.size()||i<(int)B.size();i++){
		if(i<(int)A.size())t+=A[i];
		if(i<(int)B.size())t+=B[i];
		C.push_back(t%10);
		t/=10;
	}
	if(t)C.push_back(1);
	return C;
}

int main(){
	string a,b;
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		vector<int> A,B;
		cin>>a>>b;
		for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
		for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
		auto C=add(A,B);
		if(C.size()>80)cout<<"overflow\n";
		else{
			for(int i=C.size()-1;i>=0;i--)cout<<C[i];
			cout<<'\n';
		}
	}
	return 0;
}
