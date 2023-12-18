#include <bits/stdc++.h>

using namespace std;

int main(){
	char c;
	int sum=0;
	while(true){
		while((c=getchar())!='\n'){
			sum += c-'0';
		}
		if(sum==0)break;
		else{cout<<sum<<'\n';sum=0;}
	}
	return 0;
}
