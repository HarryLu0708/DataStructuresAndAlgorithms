#include <iostream>

using namespace std;

int main(){
	int t,arr[10];
	for(int i=0;i<10;i++){
		cin>>t;
		arr[i]=t;
	}
	int cnt=0,x;
	cin>>x;
	for(int i=0;i<10;i++){
		if(x+30>=arr[i]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
