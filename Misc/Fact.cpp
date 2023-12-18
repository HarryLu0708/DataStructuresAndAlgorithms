#include <iostream>

int fact(int n);

int main(){
	for(int i=0; i<5; i++){
		std::cout<<fact(i)<<std::endl;
	}
	return 0;
}

int fact(int n){
	if(n==0){return 1;}
	return n*fact(n-1);
}
