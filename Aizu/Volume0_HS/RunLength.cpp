#include <iostream>
#include <vector>

using namespace std;

int main(){
	char s[51];
	while(cin>>s){
		vector<char> newS;
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='@'){
				int rep=s[i+1]-'0';
				char tar=s[i+2];
				i+=2;
				for(int j=0;j<rep;j++){
					newS.push_back(tar);
				}
			}else{
				newS.push_back(s[i]);
			}
		}
		for(int i=0;i<(int)newS.size();i++)cout<<newS[i];
		cout<<endl;
	}
	return 0;
}
