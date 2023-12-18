#include <bits/stdc++.h>

using namespace std;

struct Dice{
	int faces[7]; 
	void roll(char c){
		int t;
		if(c=='N'){
			t=faces[1];
			faces[1]=faces[2];
			faces[2]=faces[6];
			faces[6]=faces[5];
			faces[5]=t;
		}else if(c=='S'){
			t=faces[1];
			faces[1]=faces[5];
			faces[5]=faces[6];
			faces[6]=faces[2];
			faces[2]=t;
		}else if(c=='E'){
			t=faces[1];
			faces[1]=faces[4];
			faces[4]=faces[6];
			faces[6]=faces[3];
			faces[3]=t;
		}else if(c=='W'){
			t=faces[1];
			faces[1]=faces[3];
			faces[3]=faces[6];
			faces[6]=faces[4];
			faces[4]=t;
		}else if(c=='R'){
			t=faces[2];
			faces[2]=faces[4];
			faces[4]=faces[5];
			faces[5]=faces[3];
			faces[3]=t;
		}
	}
	int top(){
		return faces[1];
	}
	int right(){
		return faces[3];
	}
	int left(){
		return faces[4];
	}
	int front(){
		return faces[2];
	}
};

bool same(Dice d1,Dice d2){
	for(int i=1; i<7; i++)
	{
		if(d1.faces[i]!=d2.faces[i])return false;
	}
	return true;
}

int main(){
	bool ff=true;
	Dice d[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=1; j<7;j++)cin>>d[i].faces[j];
	
	for(int k=0;k<n-1;k++){
		for(int l=k+1;l<n;l++){
			bool f=false;
			
			for(int i=0;i<4;i++){
				d[l].roll('R');
				for(int j=0;j<4;j++){
					d[l].roll('N');
					if(same(d[k],d[l]))f=true;
				}
			}
			d[l].roll('E');
			for(int j=0;j<4;j++){
				d[l].roll('N');
				if(same(d[k],d[l]))f=true;
			}
			d[l].roll('W');
			d[l].roll('W');
			for(int j=0;j<4;j++){
				d[l].roll('N');
				if(same(d[k],d[l]))f=true;
			}
			if(f)ff=false;
		}
	}
	cout<<(ff?"Yes":"No")<<'\n';
	return 0;
}
