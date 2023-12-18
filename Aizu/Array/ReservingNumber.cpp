#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)cin>>arr[i];
	for(int i=0; i<n; i++){
		if(i!=n-1)cout<<arr[n-1-i]<<' ';
		else cout<<arr[n-1-i]<<endl;
	}
	return 0;
}
