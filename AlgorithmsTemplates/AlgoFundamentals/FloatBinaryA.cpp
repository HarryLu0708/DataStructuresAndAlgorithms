#include <iostream>

using namespace std;

int main(){
	double x;
	cin>>x;
	
	double l=0,r=x;
	
	while(r-l>1e-6){
		double mid=(l+r)/2;
		if(mid*mid>=x)r=mid;
		else l=mid;
	}
	
	cout<<l<<endl;
	return 0;
}
