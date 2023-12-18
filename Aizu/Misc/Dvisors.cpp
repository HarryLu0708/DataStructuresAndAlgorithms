#include <iostream>

using namespace std;

int main(){
	int a,b,c;
	int n=0;
	cin>>a>>b>>c;
	for(int i=a;i<=b;i++){
		if(c%i==0)n++;
	}
	cout<<n<<endl;
	return 0;
}
