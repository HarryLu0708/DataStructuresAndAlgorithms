#include <iostream>

using namespace std;

int main(){
	int sec;
	cin>>sec;
	int hours=sec/3600;
	sec-=hours*3600;
	int minutes=sec/60;
	sec-=minutes*60;
	
	cout<<hours<<':'<<minutes<<':'<<sec<<endl;
	return 0;
}
