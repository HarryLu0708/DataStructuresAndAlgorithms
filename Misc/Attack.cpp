#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long long int a,b;
	cin>>a>>b;
	if(a%b==0){
		cout<<a/b;
	}else{
		cout<<a/b+1;
	}
}

