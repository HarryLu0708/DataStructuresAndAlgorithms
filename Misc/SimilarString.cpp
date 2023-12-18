#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	string str1, str2;
	cin>>N>>str1>>str2;
	for(int i=0; i<N; i++){
		if(str1[i]==str2[i]){
			cout<<"True"<<endl;
		}
	}
	return 0;
}
