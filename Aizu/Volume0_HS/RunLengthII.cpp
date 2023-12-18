#include <iostream>
#include <vector>

using namespace std;

int main(){
	char s[51];
	while(cin>>s){
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='@'){
				int rep=s[i+1]-'0';
				char tar=s[i+2];
				i+=2;
				for(int j=0;j<rep;j++){
					cout<<tar;
				}
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
