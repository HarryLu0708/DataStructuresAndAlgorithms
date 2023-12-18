#include <iostream>

using namespace std;

int main(){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int test=x1*10+y1;
	int normal=x2*10+y2;
	if(test>=375)cout<<2<<endl;
	else if(test>=normal)cout<<1<<endl;
	else cout<<0<<endl;
}
