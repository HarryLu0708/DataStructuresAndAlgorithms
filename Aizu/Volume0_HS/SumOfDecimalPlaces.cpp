#include <iostream>

using namespace std;

int main(){
	int a,b,n;
	while(cin>>a>>b>>n){
		int sum=0;
		a=10*(a%b);
		for(int i=0;i<n;i++){
			sum+=a/b;
			a=10*(a%b);
		}
		cout<<sum<<endl;
	}
	return 0;
}
