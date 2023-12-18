#include <bits/stdc++.h>

using namespace std;

int main(){
	int taro=0,hanako=0;
	string taro_s,hanako_s;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>taro_s>>hanako_s;
		if(taro_s.compare(hanako_s)==0){
			taro++;
			hanako++;
		}else if(taro_s.compare(hanako_s)>0){
			taro+=3;
		}else{
			hanako+=3;
		}
	}
	cout<<taro<<' '<<hanako<<'\n';
	return 0;
}

