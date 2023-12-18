#include <iostream>

using namespace std;

int main(){
	int w,h;
	int x,y,r;
	cin>>w>>h>>x>>y>>r;
	int upperX=x+r, lowerX=x-r, leftY=y-r, rightY=y+r;
	cout<<upperX<<' '<<lowerX<<' '<<leftY<<' '<<rightY<<endl;
	if(upperX>w||lowerX<0||leftY<0||rightY>h){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
}
