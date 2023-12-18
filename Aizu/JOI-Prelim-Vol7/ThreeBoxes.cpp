#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,ptr=0;
	string s;
	cin>>n>>s;
	int arr[]={1,0,0};
	for(int i=0;i<n;i++){
		char c = s[i];
		if(c=='L'&&ptr>=1)ptr--;
		else if(c=='R'&&ptr<2)ptr++;
		arr[ptr]++;
	}
	cout<<arr[2]<<endl;
	return 0;
}
