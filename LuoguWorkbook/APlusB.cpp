#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> add(vector<int> &A, vector<int> &B){
	vector<int> C;
	
	int t=0;
	int alen=A.size();
	int blen=B.size();
	for(int i=0; i<alen||i<blen; i++){
		if(i<alen)t+=A[i];
		if(i<blen)t+=B[i];
		C.push_back(t%10);
		t/=10;
	}
	if(t)C.push_back(1);
	return C;
}

int main(){
	string a,b;
	vector<int> A,B;
	cin>>a>>b;
	for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
	for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');
	vector<int> C = add(A,B);
	for(int i=C.size()-1;i>=0;i--)cout<<C[i];
	cout<<endl;
	return 0;
}
