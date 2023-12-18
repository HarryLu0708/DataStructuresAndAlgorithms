#include <iostream>

using namespace std;

//Input: n,m

int main(){
	//Input n, m
	int n,m;
	cin>>n>>m;
	int matrix[n][m];
	int vector[m];
	//Input vector
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)cin>>matrix[i][j];
	//Input vector
	for(int j=0; j<m; j++)cin>>vector[j];
	for(int i=0; i<n; i++){
		int aibj=0;
		for(int j=0; j<m; j++){
			aibj+=matrix[i][j]*vector[j];
		}
		cout<<aibj<<endl;
	}
	return 0;
}
