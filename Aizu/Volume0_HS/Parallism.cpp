#include <bits/stdc++.h>

using namespace std;

int main(void){
	int n;
	double x[4],y[4];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int i=0;i<4;i++)cin>>x[i]>>y[i];
		double d1,d2;
		d1 = (y[1]-y[0])*(x[3]-x[1]);
		d2 = (y[3]-y[2])*(x[1]-x[0]);
		if(abs(d1-d2)<0.0000000001) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

