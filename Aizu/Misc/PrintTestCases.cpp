#include <iostream>

using namespace std;

const int N=10000;
int arr[N];

int main(){
	int x=-1;
	int n=0;
	
	while(x!=0){
		cin>>x;
		arr[n]=x;
		n++;
	}
	
	for(int i=0; i<n-1; i++)cout<<"Case "<<i+1<<": "<<arr[i]<<endl;
	return 0;
}
