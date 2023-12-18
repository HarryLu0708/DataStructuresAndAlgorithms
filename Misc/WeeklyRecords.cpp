#include <iostream>

using namespace std;

const int DAYS=7;

int main(){
	int N;
	cin>>N;
	int dayInTotal = N*DAYS;
	int arr[dayInTotal];
	
	for(int i=0; i<dayInTotal; i++){
		cin>>arr[i];
	}
	
	int times=0;
	int temp=0;
	
	for(int j=0; j<dayInTotal; j++){
		if(times==7){
			cout<<temp<<" ";
			temp=0;
			times=0;
		}
		temp+=arr[j];
		times++;
	}
	return 0;
}
