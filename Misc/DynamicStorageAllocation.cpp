#include <iostream>

using namespace std;

int main(){
	int *ptr;
	int size;
	
	cout<<"Enter the size:"<<endl;
	cin>>size;
	ptr = new int[size];
	
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	
	cout<<"Print out whole array:"<<endl;
	
	for(int i=0; i<size; i++){
		cout<<ptr[i]<<endl;
	}
	
	return 0;
}



