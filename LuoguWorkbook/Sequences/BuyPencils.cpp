#include <iostream>

using namespace std;

int main(){
	int p1a,p1p,p2a,p2p,p3a,p3p,target,p1,p2,p3;
	cin>>target;
	cin>>p1a>>p1p;
	cin>>p2a>>p2p;
	cin>>p3a>>p3p;
	
	int a=target/p1a;
	if(target%p1a!=0)a++;
	p1 = a*p1p;
	//cout<<"a:"<<a<<" p:"<<p1<<endl;
	//cout<<p1<<endl;
	
	int b=target/p2a;
	if(target%p2a!=0)b++;
	p2 = b*p2p;
	//cout<<"a:"<<b<<" p:"<<p2<<endl;
	//cout<<p2<<endl;
	
	int c=target/p3a;
	if(target%p3a!=0)c++;
	p3 = c*p3p;
	//cout<<"a:"<<c<<" p:"<<p3<<endl;
	//cout<<p3<<endl;
	
	int min=p1;
	if(min>p2)min=p2;
	if(min>p3)min=p3;
	cout<<min<<endl;
	
	return 0;
}
