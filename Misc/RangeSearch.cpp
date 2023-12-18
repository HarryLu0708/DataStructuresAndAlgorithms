#include <iostream>

using namespace std;

int main(){
	int n,x;
	int res = 0;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int temp = i;
		while(temp>=1){
			int digit = (temp%10);
			if(digit==x){
				res++;
			}
			temp=temp/10;
			cout<<temp<<endl;
		}
	}
	cout<<"Result: "<<res<<endl;
	return 0;
}
