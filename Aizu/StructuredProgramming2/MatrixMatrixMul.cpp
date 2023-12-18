#include <iostream>

using namespace std;

//Input: n,m

const int N=101;

int matrixA[N][N];
int matrixB[N][N];
long long int res[N][N];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	//Input n, m
	int n,m,l;
	cin>>n>>m>>l;
	
	//Input Matrices
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)cin>>matrixA[i][j];
	for(int i=0; i<m; i++)
		for(int j=0; j<l; j++)cin>>matrixB[i][j];
	//Processing
	
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			for(int k=0; k<m;k++){
				res[i][j]+=matrixA[i][k]*matrixB[k][j];
			}
		}
	}
	//Output
	for(int i=0; i<n; i++){
		for(int j=0; j<l; j++){
			if(j<l-1) cout<<res[i][j]<<' ';
			else cout<<res[i][j];
		}
		cout<<"\n";
	}
	return 0;
}
