#include <bits/stdc++.h>

using namespace std;

const int N=100003;

int main(){	
	pair<int,int> arr[N];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>arr[i].second>>arr[i].first;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i].first<<' '<<arr[i].second<<endl;
	}
	int ans=0,t=0;
	for(int i=0;i<n;i++){
		if(t<arr[i].second){
			ans++;
			t=arr[i].first;
		}
	}
	cout<<ans<<endl;
	return 0;
}

