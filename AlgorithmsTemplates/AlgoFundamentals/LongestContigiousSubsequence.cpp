#include <iostream>
#include <string.h>

using namespace std;

const int N=100010;

int n;
int a[N],b[N];

int main(){
	//j往左能最远到什么地方
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	int res=0;
	for(int i=0,j=0;i<n;i++){
		b[a[i]]++;
		while(b[a[i]]>1){
			b[a[j]]--;
			j++;
		}
		res=max(res,i-j+1);
	}
	cout<<res<<'\n';
	return 0;
}
