#include <iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int h=c-a;
	int m=d-b;
	if(m<0){
		h--;
		m+=60;
	}
	cout<<h<<' '<<m<<endl;
}
