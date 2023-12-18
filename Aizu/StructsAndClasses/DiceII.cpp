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
	Dice d1,d2;
	for(int i=1;i<7;i++)cin>>d1.faces[i];
	for(int i=1;i<7;i++)cin>>d2.faces[i];
	Dice d[]={d1,d2};
	bool f=false;
	
	for(int i=0;i<4;i++){
		d[1].roll('R');
		for(int j=0;j<4;j++){
			d[1].roll('N');
			if(same(d[0],d[1]))f=true;
		}
	}
	d[1].roll('E');
	for(int j=0;j<4;j++){
		d[1].roll('N');
		if(same(d[0],d[1]))f=true;
	}
	d[1].roll('W');
	d[1].roll('W');
	for(int j=0;j<4;j++){
		d[1].roll('N');
		if(same(d[0],d[1]))f=true;
	}
	
	cout<<(f?"Yes":"No")<<'\n';
	return 0;
}
