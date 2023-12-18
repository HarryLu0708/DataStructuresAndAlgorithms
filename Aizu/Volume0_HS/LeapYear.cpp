#include <iostream>

using namespace std;

int main(){
	int a,b;
	bool e=true;
	while(cin>>a>>b,a||b){
		if(!e)cout<<endl;
		e=false;
		if(a==0&&b==0)break;
		bool f=false;
		for(int i=a;i<=b;i++){
			if(i%400==0){
				f=true;
				cout<<i<<endl;
			}
			else if(i%4==0&&!(i%100==0)){
				f=true;
				cout<<i<<endl;
			}
		}
		if(f==false)cout<<"NA"<<endl;
	}
	return 0;
}
