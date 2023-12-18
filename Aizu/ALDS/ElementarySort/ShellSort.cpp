#include <bits/stdc++.h>

using namespace std;

long long cnt;
vector<int> G;
int arr[1000006];

void insertionSort(int arr[],int n,int g){
	for(int i=g;i<n;i++){
		int v=arr[i];
		int j=i-g;
		while(j>=0&&arr[j]>v){
			arr[j+g]=arr[j];
			j=j-g;
			cnt++;
		}
		arr[j+g]=v;
	}
}

void shellSort(int arr[],int n){
	cnt=0;
	for(int h=1;;){
		if(h>n)break;
		G.push_back(h);
		h = 3*h+1;
	}
	for(int i=G.size()-1;i>=0;i--)insertionSort(arr,n,G[i]);
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i];
	shellSort(arr,n);
	cout<<G.size()<<'\n';
	int l=G.size();
	for(int i=l-1;i>=0;i--)cout<<G[i]<<' ';
	cout<<'\n';
	cout<<cnt<<'\n';
	for(int i=0;i<n;i++)cout<<arr[i]<<'\n';
	return 0;
}
