#include <iostream>

using namespace std;

int arr[100];

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int i=0;
	while(true){
		int x;
		cin>>x;
		if(x==0)break;
		arr[i]=x;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		if(j!=i-1)cout<<" ";
		cout<<arr[j];
	}
	return 0;
}
