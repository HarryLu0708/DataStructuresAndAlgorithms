#include <bits/stdc++.h>

using namespace std;

int c[1001][1001];

int lcs(string X,string Y){
	int maxl=0;
	int m=X.size();
	int n=Y.size();
	X=' '+X;
	Y=' '+Y;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			//if i=0 or j=0, then 0
			//if i,j>0 and x_i=y_i, then c[i-1][j-1]+1 
			//if i,j>0 and x_i!=y_i, then max(c[[i][j-1],c[i-1][j]))
			if(X[i]==Y[j])c[i][j]=c[i-1][j-1]+1;
			else c[i][j]=max(c[i-1][j],c[i][j-1]);
			maxl=max(maxl,c[i][j]);
		}
	}
	return maxl;
}


int main(){
	int n;
	cin>>n;
	string x,y;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		cout<<lcs(x,y)<<'\n';
	}
	return 0;
}
