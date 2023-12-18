#include <iostream>

using namespace std;

int main(){
	int arr[3];
	for(int i=0; i<3; i++)cin>>arr[i];
	for(int i=0; i<3; i++){
		for(int j=i+1; j<3; j++){
			if(arr[i]>arr[j])swap(arr[i],arr[j]);
		}
	}
	cout<<arr[0]<<' '<<arr[1]<<' '<<arr[2]<<endl;
	
}
