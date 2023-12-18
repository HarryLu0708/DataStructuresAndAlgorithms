#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int sum = 0;
	for(int i=0;i<9;i++){
		sum += (pow(3,i)-pow(2,i));
	}
	cout<<sum<<endl;
	return 0;
}
