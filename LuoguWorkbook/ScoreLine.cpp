#include <iostream>

using namespace std;

struct candidate{
	int id,score;
};

candidate arr[5020];

void sort(candidate arr[], int l, int r){
	if(l>=r)return;
	int i=l-1,j=r+1,x=arr[(l+r)/2].score;
	while(i<j){
		do i++;while(arr[i].score>x);
		do j--;while(arr[j].score<x);
		if(i<j)swap(arr[i],arr[j]);
	}
	sort(arr,l,j);sort(arr,j+1,r);
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i].id>>arr[i].score;
	sort(arr,0,n-1);
	int bl = m*3/2;int num = 0;
	for(int i=0;i<n;i++){
		if(arr[i].score<arr[bl].score)break;
		num++;
	}
	cout<<arr[bl].score<<' '<<num<<endl;
	for(int i=0;i<bl;i++)cout<<arr[i].id<<' '<<arr[i].score<<endl;
	return 0;
}
