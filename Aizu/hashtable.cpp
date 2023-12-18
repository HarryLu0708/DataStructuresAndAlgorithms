#include <iostream>

using namespace std;

int main(){
	int target;
	while(1){
		cin>>target;
		//int arr[]={0,0,0,69,70,0,0,0,0,86,0};
		for(int i=0;i<11;i++){
			cout<<target<<":"<<((target%11)+i*(7-target%7))%11<<endl;
			//cout<<target<<"+"<<i<<"+"<<i*i<<"="<<(target+i+i*i)%11<<endl;
		}
	}
}
