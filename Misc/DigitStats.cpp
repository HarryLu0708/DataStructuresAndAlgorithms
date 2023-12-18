#include <iostream>

using namespace std;

int main(){
	int a;
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	cin>>a;
	while(a>=1){
		int x=(a%10);
		arr[x]+=1;
		a/=10;
	}
	for(int i=0; i<10; i++){
		if(arr[i]>0)cout<<i<<":"<<arr[i]<<endl;
	}
	return 0;
}
