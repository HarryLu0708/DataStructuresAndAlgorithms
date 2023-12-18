#include <bits/stdc++.h>

using namespace std;

struct Card{
	char val,suit;
};

bool isStable(struct Card sarr[],struct Card barr[],int n){
	for(int i=0;i<n;i++){
		if(sarr[i].suit!=barr[i].suit)return false;
	}
	return true;
}

void selectionSort(struct Card arr[], int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i;j<n;j++){
			if(arr[min].val>arr[j].val)min=j;
		}
		swap(arr[i],arr[min]);
	}
}

void bubbleSort(struct Card arr[], int n){
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(arr[j].val<arr[j-1].val)swap(arr[j],arr[j-1]);
		}
	}
}

void printAll(struct Card arr[],int n){
	for(int i=0;i<n;i++){
		if(i>0)cout<<' ';
		cout<<arr[i].suit<<arr[i].val;
	}
	cout<<'\n';
}

struct Card arr[37];
struct Card brr[37];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i].suit>>arr[i].val;
	for(int i=0;i<n;i++)brr[i]=arr[i];
	bubbleSort(brr,n);  
	selectionSort(arr,n);
	printAll(brr,n);
	cout<<"Stable\n";
	printAll(arr,n);
	if(isStable(arr,brr,n))cout<<"Stable\n";
	else cout<<"Not stable\n";
	return 0;
}



