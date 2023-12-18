#include <iostream>

using namespace std;

bool check(int x){
	
}

int binarySearchA(int l, int r){
	while(l<r){
		int mid = (l+r)/2;
		if(check(mid)){r=mid;}
		else{l=mid+1;}
	}
	return l;
}

int binarySearchB(int l, int r){
	while(l<r){
		int mid = (l+r+1)/2;
		if(check(mid)){l=mid;}
		else{r=mid-1;}
	}
	return l;
}

int main(){
	return 0;
}
