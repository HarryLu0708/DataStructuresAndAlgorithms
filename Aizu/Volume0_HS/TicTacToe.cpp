#include <iostream>

using namespace std;

char check(char b[3][3]){
	if(b[0][0]==b[1][1]&&b[0][0]==b[2][2]&&b[0][0]!='s')return b[0][0];
	else if(b[0][2]==b[1][1]&&b[0][2]==b[2][0]&&b[0][2]!='s')return b[0][2];
	else{
		for(int i=0;i<3;i++){
			if(b[i][0]==b[i][1]&&b[i][1]==b[i][2]&&b[i][1]!='s')return b[i][1];
			if(b[0][i]==b[1][i]&&b[1][i]==b[2][i]&&b[1][i]!='s')return b[1][i];
		}
	}
	return 'd';
}


int main(){
	char s[9],b[3][3];
	while(cin>>s){
		int p=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				b[i][j]=s[p];
				p++;
			}
		}
		cout<<check(b)<<endl;
	}
	return 0;
}
