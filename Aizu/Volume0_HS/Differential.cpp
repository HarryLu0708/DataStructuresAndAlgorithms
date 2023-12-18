#include <iostream>
#include <vector>

using namespace std;

int main(){
	double h;
	vector<double> v;
	int l;
	while(cin>>h){
		v.push_back(h);
		l++;
	}
	double min=v[0],max=v[0];
	for(int i=0;i<l;i++){
		if(min>v[i])min=v[i];
		if(max<v[i])max=v[i];
	}
	cout<<max-min<<endl;
	return 0;
}
