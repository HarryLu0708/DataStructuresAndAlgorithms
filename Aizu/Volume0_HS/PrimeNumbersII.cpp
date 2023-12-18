#include <iostream>

using namespace std;

bool isPrime(int n){
	if(n<2)return false;
	else if(n==2)return true;
	else if(n%2==0)return false;
	else{
		for(int i=3;i*i<=n;i+=2)if(n%i==0)return false;
	}
	
	return true;
}

void solve(int n){
	int i=n;
	while(n--){
		if(n!=i&&isPrime(n)){
			cout<<n<<' ';
			break;
		}
	}
	while(n++){
		if(n!=i&&isPrime(n)){
			cout<<n<<endl;
			break;
		}
	}
}

int main(){
	int n;
	while(cin>>n){
		solve(n);
	}
	return 0;
}
