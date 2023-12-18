#include <iostream>

using namespace std;

int main(){
	int r,c;
	cin>>r>>c;
	int sheet0[r][c];
	int sheet1[r+1][c+1];
	int cSum[c+1];
	int totalSum=0;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)cin>>sheet0[i][j];
	for(int i=0; i<c+1; i++)cSum[i]=0;
	for(int i=0; i<r+1; i++){
		int rSum=0;
		for(int j=0; j<c+1; j++){
			if(j<c&&i<r){
				sheet1[i][j]=sheet0[i][j];
				rSum+=sheet0[i][j];
				cSum[j]+=sheet0[i][j];
			}
			else if(j==c){
				sheet1[i][j]=rSum;
				totalSum+=rSum;
				rSum=0;
			}
			else if(i==r){
				sheet1[i][j]=cSum[j];
			}
		}
	}
	sheet1[r][c]=totalSum;
	//Output
	for(int i = 0; i < r+1; i++){
		for(int j = 0; j < c; j++){
			cout<<sheet1[i][j]<<' ';
		}
		cout<<sheet1[i][c]<<endl;
	}
	return 0;
}


