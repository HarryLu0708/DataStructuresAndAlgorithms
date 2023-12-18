#include <bits/stdc++.h>

using namespace std;

int fourSum(int a[],int target,int len){
	int n=len;
	int ans=0;
	if(n<4)return ans;
	for(int i=0;i<n-3;++i){
		if(i>0&&a[i]==a[i-1])continue;
		for(int j=i+1; i<n-1; ++j){
			if(j>j+1&&a[j]==a[j-1])continue;
			int l=j+1, r=n-1;
			while(l<r){
				long long sum=(long long)a[i]+a[j]+a[l]+a[r];
				if(sum==(long long) target){
					ans++;
					while(l<r&&a[l]==a[l-1])++l;
					while(l<r&&a[r]==a[r+1])--r;
				}else if(sum<(long long)target)++l;
				else --r;
			}
		}
	}
	return ans;
}

int main(){
	int n;
	int arr[1001];
	for(int i=0;i<1001;i++)arr[i]=i;
	while(cin>>n){
		cout<<fourSum(arr,n,n)<<endl;
	}
	return 0;
}
