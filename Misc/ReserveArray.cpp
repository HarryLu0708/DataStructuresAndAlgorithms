#include <iostream>

using namespace std;

int* swap(int arr[], int a, int b);
void reserve(int arr[], int a, int b);
void printWholeArray(int arr[],int len);
void recursivePrint(int arr[], int i);
int main(){
	int arr[] = {1,2,3,4,5};
	reserve(arr,0,4);
	int len = sizeof(arr)/sizeof(int);
	printWholeArray(arr,len);
	//recursivePrint(arr,0);
	return 0;
}

int* swap(int arr[], int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
	return arr;
}

void reserve(int arr[], int a, int b){
	if(a<b){
		swap(arr,a,b);
		reserve(arr,a+1,b-1);
	}else{
		return; 
	}
}

void printWholeArray(int arr[], int len){
	for(int i=0; i<len;i++){
		cout<<arr[i]<<endl;
	}
}


void recursivePrint(int arr[], int i){
	if(i<sizeof(arr)/sizeof(int)){
		cout<<arr[i]<<endl;
		recursivePrint(arr,i+1); 
	}else{
		return ;
	}
}


