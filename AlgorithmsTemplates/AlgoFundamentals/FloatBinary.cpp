#include <iostream>

using namespace std;

bool check(int x){
	
}

double binary(int l, int r){
	const int eps = 1e-1;
	while(r-l>eps){
		double mid = (l+r)/2;
		if(check(mid))r=mid;
		else l=mid;
	}
	return l;
}

int main(){
	return 0;
}
