#include <iostream>

using namespace std;

int counting(int target,int find){
	int c=0;
	while(target!=0){
		int t=target%10;
		if(t==find)c++;
		t/=10;
	}
	return c;
}

int main(){
	long long n,x,c=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int b=i;
		while(b>0){
			int t=b%10;
			b/=10;
			if(t==x)c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
