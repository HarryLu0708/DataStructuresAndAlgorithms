//滑动窗口：在一个区间里面寻找极值
//速度比stl队列快
#include <iostream>

using namespace std;

const int N=1000010;
int que[N],a[N];
int hh,tt;
int n,k;

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		if(hh<=tt&&i-k+1>a[hh])hh++;
		while(hh<=tt&&a[que[tt]]>=a[i])tt--;
		if(i>=k-1)cout<<a[que[hh]]<<endl;
		que[++tt]=i;
	}
	return 0;
}

