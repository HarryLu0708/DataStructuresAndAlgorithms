#include <bits/stdc++.h>

using namespace std;

int main(){
	int a[5],b[5],a1,a2,a3,a4,b1,b2,b3,b4;
	while(cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4){
		int hit=0,blow=0;
		a[1]=a1;a[2]=a2;a[3]=a3;a[4]=a4;b[1]=b1;b[2]=b2;b[3]=b3;b[4]=b4;
		for(int i=1;i<5;i++){
			if(a[i]==b[i])hit++;
		}
		for(int i=1;i<5;i++){
			for(int j=1;j<5;j++){
				if(a[i]==b[j]&&i!=j)blow++;
			}
		}
		cout<<hit<<' '<<blow<<endl;
	}
	return 0;
}
