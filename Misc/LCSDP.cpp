#include <iostream>
#include <string>

using namespace std;

int LCS(string str1, string str2);

int main(){
	cout<<LCS("aggh","agih")<<endl;
	return 0;
}

int LCS(string str1, string str2){
	int m = str1.size();
	int n = str2.size();
	
	int table[m+1][n+1];
	
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			if(i==0||j==0){
				table[i][j] = 0;
			}
			else if(str1[i-1]==str2[j-1]){
				table[i][j] = table[i-1][j-1]+1;
			}
			else{
				table[i][j] = max(table[i-1][j],table[i][j-1]);
			}
		}
	}
	
	return table[m][n];
}
