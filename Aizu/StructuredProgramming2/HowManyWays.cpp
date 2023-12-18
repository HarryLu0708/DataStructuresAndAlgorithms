#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	while(true){
		//input
		int n,x;
		cin>>n>>x;
		if(n==0&&x==0)break;
		//init
		int arr[n];
		int count=0;
		for(int i=0;i<n;i++)arr[i]=i+1;
		//binary search
		for(int i=0;i<n-2;i++){
			int left=i+1,right=n-1;
			while(left<right){
				if(arr[i]+arr[left]+arr[right]==x){
					count++;
					left++;
					right--;
				}
				else if(arr[i]+arr[left]+arr[right]>x)right--;
				else left++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
