#include <iostream>
#include <string>

using namespace std;

int main(){
	int N;
	string S;
	
	cin>>N>>S;
	
	int t=0;
	int a=0;
	for(int i=0; i<N; i++){
		if(S[i]=='T'){
			t++;
		}else{
			a++;
		}
	}
	if(t>a){
		cout<<'T';
	}else{
		cout<<'A';
	}
	return 0;
}
