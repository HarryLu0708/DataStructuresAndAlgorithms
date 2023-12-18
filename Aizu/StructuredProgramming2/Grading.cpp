#include <iostream>

using namespace std;

int main(){
	int m,f,r;
	while(true){
		//Input
		cin>>m>>f>>r;
		if(m==-1&&f==-1&&r==-1)break;
		//m:midterm; f:final; r:makeup
		//student doesnt take m or f -> F
		//m+f>=80 -> A
		//80>m+f>=65 -> B
		//65>m+f>=50 -> C
		//50>m+f>=30 -> D; r>=50 -> c
		//m+f<30 -> F
		int total = m+f;
		if(m==-1||f==-1)cout<<'F'<<endl;
		else if(total>=80)cout<<'A'<<endl;
		else if(total>=65)cout<<'B'<<endl;
		else if(total>=50)cout<<'C'<<endl;
		else if(total>=30){
			if(r>=50)cout<<'C'<<endl;
			else cout<<'D'<<endl;
		}
		else cout<<'F'<<endl;
	}
	return 0;
}
