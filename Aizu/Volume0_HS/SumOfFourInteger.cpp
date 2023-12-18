#include<bits/stdc++.h>

using namespace std;

int a[10],b[10],c[10],d[10];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	for(int i=0;i<10;i++)a[i]=b[i]=c[i]=d[i]=i;
	int cnt,x;
	while(cin>>x){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(a[i]+b[j]+c[k]+d[l]==x){cnt++;}
					}
				}
			}
		}
		cout<<cnt<<'\n';
		cnt=0;
	}
	return 0;
}
