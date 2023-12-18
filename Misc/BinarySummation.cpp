#include <iostream>

using namespace std;

int sum(int arr[], int low, int high);

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	cout<<sum(arr,0,8);
	return 0;
}

int sum(int arr[],int low, int high){
	if(low==high){
		return arr[low];
	}
	else{
		int mid = (low+high)/2;
		return sum(arr,low,mid)+sum(arr,mid+1,high);
	}
}


