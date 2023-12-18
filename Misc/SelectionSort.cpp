#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int a[5] = {23,64,87,13,43};
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	for(int i=0; i<5;i++)cout<<a[i]<<endl;
	return 0;
}
