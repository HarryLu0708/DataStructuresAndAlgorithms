#include <iostream>

using namespace std;

int main(){
	int n;
	int currentHeight = 0;
	int max = 0;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		if(x>currentHeight){
			max += (x-currentHeight);
		}
		currentHeight = x;
	}
	cout<<"Max:"<<max<<endl;
	return 0;
}
