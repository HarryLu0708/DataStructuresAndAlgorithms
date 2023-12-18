#include <iostream>

using namespace std;

int main(){
	int d;
	while(cin>>d){
		int total=0;
		int start=0;
		for(int i=d;i<=600;i+=d){
			start=i-d;
			total+=(start*start*d);
		}
		cout<<total<<endl;
	}
	return 0;
}
