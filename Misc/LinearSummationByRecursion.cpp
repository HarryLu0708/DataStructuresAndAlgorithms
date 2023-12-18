#include <iostream>

using namespace std;

int sum(int a[],int n);

int main(){
	int arr[] = {1,2,3,4,5};
	cout<<sum(arr,5)<<endl;
	return 0;
}

int sum(int a[],int n){
	return (n<1)?0:sum(a,n-1)+a[n-1];
}
