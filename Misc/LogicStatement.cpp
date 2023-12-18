#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	bool a = true;
	
	srand(time(0));
	int b = rand()%1000+1;
	
	if(b>500){
		a = true;
	}else{
		a = false;
	}
	
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
}
