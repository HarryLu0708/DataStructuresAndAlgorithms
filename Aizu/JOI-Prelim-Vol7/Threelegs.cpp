#include <iostream>

using namespace std;

int arr[101];

int main(){
	int n,in;
	cin>>n;
	for(int i=0;i<2*n-1;i++){
		cin>>in;
		arr[in]++;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]<2){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
