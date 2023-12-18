#include <iostream>

using namespace std;

int A[100];
int B[100];

int main(){
	int m,n,tmp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;
		A[i]=tmp;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>tmp;
		B[i]=tmp;
	}
	int score = 0;
	for(int i=0;i<n;i++){
	//	cout<<"A"<<i<<":"<<A[i]<<endl;
		score += A[i];
		for(int j=0;j<m;j++){
			if(B[j]==score){
				score=0;
				break;
			}
		}
	//	cout<<i<<":"<<score<<endl;
	}
	cout<<score<<endl;
}
