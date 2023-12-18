#include <iostream>

using namespace std;

int main(){
	int arr1[3];
	int arr2[3];
	
	for(int i=0; i<3; i++){
		cin>>arr1[i];
		cin>>arr2[i];
	}
	
	for(int i=0; i<3; i++){
		cout<<arr2[i]-arr1[i]<<endl;
	}
	return 0;
}
