#include <iostream>

using namespace std;

int main(){
	int trees[10] = {100,200,150,40,200,130,150,240,104,134};
	int chairH = 30;
	int TaotaoH;
	int res=0;
	cin>>TaotaoH;
	for(int i=0; i<10; i++){
		if(chairH+TaotaoH>=trees[i]){
			res++;
		}
	}
	cout<<"Result: "<<res<<endl;
	return 0;
}
