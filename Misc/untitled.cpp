#include <iostream>

int main(){
	int n,u,d;
	std::cin>>n>>u>>d;
	int times=0;
	while(n>0){
		n-=u;
		n+=d;
		times++;
	}
	std::cout<<times-1<<std::endl;
}
