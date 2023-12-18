#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double g=d/a;
		double y=(f-c*g)/(e-b*g);
		double x=(c-b*y)/a;
		cout<<fixed<<setprecision(3)<<x<<' '<<y<<'\n';
	}
}
