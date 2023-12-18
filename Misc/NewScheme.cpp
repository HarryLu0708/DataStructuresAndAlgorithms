#include <iostream>

using namespace std;

int main(){
	int arr[8];
	for(int j=0; j<8; j++){
		cin>>arr[j];
		if(arr[j]<100||arr[j]>675||arr[j]%25!=0||(j>0&&arr[j-1]>arr[j])){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
}
