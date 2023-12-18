/*
  A+B; A-B; A*a; A/a
  
 */
#include <bits/stdc++.h>

using namespace std;

bool cmp(vector<int> &A, vector<int> &B){
	if(A.size()!=B.size())return A.size()>B.size();
	for(int i=A.size()-1;i>=0;i--)
		if(A[i]!=B[i])return A[i]>B[i];
	return true;
}


//分两种情况讨论，若A>=B直接减，其他情况-（B-A）
vector<int> sub(vector<int> &A, vector<int> &B){
	vector<int> C;
	for(int i=0,t=0;i<(int)A.size();i++){
		t=A[i]-t;//t=A这一位的位数-上一位借的数
		//看看B这一位有没有数
		if(i<(int)B.size())t-=B[i];
		//取t的个位数
		C.push_back((t+10)%10);
		//是否借位
		if(t<0)t=1;
		else t=0;
	}
	while(C.size()>1&&C.back()==0)C.pop_back();//去掉前导零
	return C;
}

int main(){
	string a,b;
	vector<int> A,B;
	cin>>a>>b;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
	
	if(cmp(A,B))
	{
		auto C=sub(A,B);
		for(int i=C.size()-1;i>=0;i--)cout<<C[i];
	}else{
		auto C=sub(B,A);
		cout<<'-';
		for(int i=C.size()-1;i>=0;i--)cout<<C[i];
	}
		
		
	return 0;
}
