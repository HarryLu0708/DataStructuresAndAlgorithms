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
		}
	}
	void top(){
		cout<<faces[1]<<'\n';
	}
};

int main(){
	Dice d;
	for(int i=1;i<7;i++)cin>>d.faces[i];
	string s;
	cin>>s;
	int l=s.size();
	for(int i=0;i<l;i++)d.roll(s[i]);
	d.top();
	return 0;
}
