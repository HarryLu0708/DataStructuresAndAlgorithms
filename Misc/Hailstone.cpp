#include <iostream>

using namespace std;

void hailStone(int n);

int main(){
	int n;
	cin>>n;
	hailStone(n);
	return 0;
} 

void hailStone(int n){
	cout<<n<<endl;
	while(n>1){
		if(n%2==0){
			n/=2;
			cout<<n<<endl;
		}else{
			n = 3*n+1;
			cout<<n<<endl;
		}
	}
}
