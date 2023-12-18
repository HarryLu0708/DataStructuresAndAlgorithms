#include <iostream>

using namespace std;

int twoSum(int arr[], int target){
	int len = sizeof(arr)/sizeof(int);
	int ans = 0;
	for(int i=0; i<len-1; i++){
		for(int j=i+1; j<len; j++){
			if(arr[i]+arr[j]==target){
				ans++;
			}
		}
	} 
	return ans;
}

int main(){
	int arr[] = {1,5,2,7,2,4,2,1,5,3};
	cout<<twoSum(arr,8)<<endl;
	return 0;
}


