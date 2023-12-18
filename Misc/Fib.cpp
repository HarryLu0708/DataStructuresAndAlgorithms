#include <iostream>

using namespace std;

int main(){
	int arr[20];
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2; i<20; i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	for(int i=0; i<20;i++){
		cout<<arr[19-i]<<endl;
	}
	return 0;
}
