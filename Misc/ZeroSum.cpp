#include <iostream>

using namespace std;

int zeroSum(int* arr){
	int ans = 0;
	int len = sizeof(arr);
	cout<<len<<endl;
	for(int i=0; i<len; ++i){
		for(int j=0; j<len; ++j){
			if(arr[i]+arr[j]==0&&i!=j){
				ans+=1;
			}
			cout<<i<<" "<<j<<" Sum:"<<arr[i]+arr[j]<<" Ans:"<<ans<<endl;
		}
	}
	return ans;
}

int main(){
	int arr[] = {1,3,2,0,-2,-3,7,-3,1,-3};
	cout<<zeroSum(arr)<<endl; 
	return 0;
}
