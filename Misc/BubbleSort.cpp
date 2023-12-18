#include <iostream>

using namespace std;

int main(){
	int a[5] = {23,54,78,53,13};
	for(int i=4; i>0; i--){
		for(int j=0; j<i; j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(int i=0; i<5;i++)cout<<a[i]<<endl;
	return 0;
}
