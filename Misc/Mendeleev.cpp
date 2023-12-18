#include <iostream>

using namespace std;

int good(int x);
int bad(int y){
	
}

int main(){
	int samples;
	cin>>samples;
	int arr[samples];
	for(int i=0; i<samples; i++){
		cin>>arr[i];
	}
	for(int j=0; j<samples; j++){
		int good = good(arr[i]);
		int bad = bad(arr[i]);
		cout<<good-bad<<endl;
	}
}

int good(int x){
	if(x==2){return 1;	}
	return good(x-1)+(x-1);
}


