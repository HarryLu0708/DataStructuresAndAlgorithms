#include <iostream>

using namespace std;

const int N=3000;
int arr1[N];
int arr2[N];

int main(){
	int x=-1,y=-1,n=0;
	while(!(x==0&&y==0)){
		cin>>x>>y;
		arr1[n]=x;
		arr2[n]=y;
		n++;
	}
	for(int i=0; i<n-1; i++){
		if(arr1[i]<arr2[i])cout<<arr1[i]<<' '<<arr2[i]<<endl;
		else cout<<arr2[i]<<' '<<arr1[i]<<endl;
	}
	
	return 0;
}
