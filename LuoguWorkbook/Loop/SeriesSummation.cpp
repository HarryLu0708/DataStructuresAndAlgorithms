#include <iostream>

using namespace std;

int main(){
	double k,s=0;
	cin>>k;
	int i=0;
	while(s<=k){
		i++;
		s += (1.0/i);
		//cout<<s<<" "<<i<<endl;
	}
	cout<<i<<endl;
	return 0;
}
