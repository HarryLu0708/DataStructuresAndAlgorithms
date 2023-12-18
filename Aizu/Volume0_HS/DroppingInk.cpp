#include <bits/stdc++.h>

using namespace std;

int table[10][10];

void drop(int x,int y){
	if(x>=0&&x<10&&y>=0&&y<10)table[x][y]+=1;
}

void smalldrop(int x,int y){
	drop(x,y);
	drop(x+1,y);
	drop(x-1,y);
	drop(x,y+1);
	drop(x,y-1);
}

void middrop(int x,int y){
	smalldrop(x,y);
	drop(x+1,y+1);
	drop(x-1,y-1);
	drop(x-1,y+1);
	drop(x+1,y-1);
}

void bigdrop(int x,int y){
	middrop(x,y);
	drop(x+2,y);
	drop(x-2,y);
	drop(x,y+2);
	drop(x,y-2);
}

void dropping(int x,int y,int s){
	switch (s) {
	case 1:
		smalldrop(x,y);
		break;
	case 2:
		middrop(x,y);
		break;
	case 3:
		bigdrop(x,y);
		break;
	}
}

void check(){
	int max=0;int white=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(table[i][j]==0)white++;
			if(table[i][j]>max)max=table[i][j];
		}
	}
	cout<<white<<endl;
	cout<<max<<endl;
}

void printall(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(j)cout<<' ';
			cout<<table[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	int x,y,s;
	while(scanf("%d,%d,%d",&x,&y,&s)!=EOF){
		if(s==1){
			smalldrop(x,y);
			//printall();
		}
		else if(s==2){
			middrop(x,y);
			//printall();
		}
		else{
			bigdrop(x,y);
			//printall();
		}
	}
	check();
	return 0;
}
