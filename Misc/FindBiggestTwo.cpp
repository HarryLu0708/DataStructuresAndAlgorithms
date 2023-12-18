#include <iostream>

using namespace std;

int* findBiggestTwo(int arr[]);
void printWholeArray(int arr[], int len);

int main(){
	int arr[] = {1,4,2,3,6,1,7,2,0,6,4,1};
	int res[] = findBiggestTwo(arr);
	int len = sizeof(res)/sizeof(int);
	printWholeArray(res,len);
	return 0;
}

int* findBiggestTwo(int arr[]){
	int res[] = {0,0};
	for(int i=0; i<sizeof(arr)/sizeof(int);i++){
		
	}
}

void printWholeArray(int arr[], int len){
	for(int i=0; i<len;i++){
		cout<<arr[i]<<endl;
	}
}



