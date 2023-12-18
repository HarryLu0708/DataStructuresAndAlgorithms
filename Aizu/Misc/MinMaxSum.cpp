#include <iostream>

using namespace std;

int main(){
	//Read
	int n;
	cin>>n;
	int temp,max=-1000001,min=1000001;
	long long int sum=0;
	for(int i=0; i<n; i++){
		cin>>temp;
		sum += temp;
		if(temp>max)max=temp;
		if(temp<min)min=temp;
	}

	cout<<min<<' '<<max<<' '<<sum<<endl;
	return 0;
}
