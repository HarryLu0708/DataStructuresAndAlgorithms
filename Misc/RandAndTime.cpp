#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int x,y,z;
	x = rand()%1000+1;
	y = rand()%1000+1;
	z = rand()%1000+1;
	
	cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<'\n';
}
