#include <iostream>

using namespace std;

int main(){
	int arr[5] = {2,5,1,3,2};
	
	for(int i=sizeof(arr)/sizeof(int)-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<sizeof(arr)/sizeof(int); i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}
 
