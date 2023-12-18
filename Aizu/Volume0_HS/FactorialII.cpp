#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	while(1){
		cin>>x;
		if(x==0)break;
		int count=0;
		for(int i=1;i<=x;i++){
			int tmp=i;
			while(tmp>=5&&tmp%5==0){
				count++;
				tmp/=5;
			}
		}
		cout<<count<<'\n';
	}
	return 0;
}
