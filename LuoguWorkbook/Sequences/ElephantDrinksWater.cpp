#include <iostream>

using namespace std;

int main(){
	double r,h;
	cin>>h>>r;
	double vol=r*r*3.14*h;
	double n = 20000/vol;
	if(n-int(n)==0){
		n = int(n);
	}else{
		n = int(n)+1;
	}
	cout<<n<<endl;
	return 0;
}
