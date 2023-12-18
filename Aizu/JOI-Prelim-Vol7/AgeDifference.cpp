#include <iostream>

using namespace std;

int arr[250000];

int abs(int x){
	if(x<0)return -x;
	else return x;
}

int main(){
	int a,n,min,max,selected=0;
	cin>>n;
	cin>>min;
	max=min;
	arr[0]=min;
	for(int i=1;i<n;i++){
		cin>>a;
		arr[i]=a;
		if(a>max){max=a;selected=i;}
		if(a<min)min=a;
	}
	//cout<<"min:"<<min<<" max:"<<max<<endl;
	for(int i=0;i<n;i++){
		if(i==selected)cout<<max-min<<endl;
		else {
			int a=abs(min-arr[i]);int b=abs(max-arr[i]);
			if(a>b)cout<<a<<endl;
			else cout<<b<<endl;
		}
	}
	
	
	return 0;
}
