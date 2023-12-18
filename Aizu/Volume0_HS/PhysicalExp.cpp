#include <bits/stdc++.h>

using namespace std;

int main(){
	double v,N;
	while(cin>>v){
		for(N=0;;N++){
			if(N>=(v*v+98)/98){
				cout<<(int)N<<endl;
				break;
			}
		}
	}
	return 0;
}
