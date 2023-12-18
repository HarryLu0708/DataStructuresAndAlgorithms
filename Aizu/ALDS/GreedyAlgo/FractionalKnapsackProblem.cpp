#include <bits/stdc++.h>

using namespace std;

/*
  Find the ratio of value/weight
  Sort the items based on the ratio
  Put completed items as much as we can
  If we dont have capacity for a completed item, then break it apart
 */

struct item{
	double weight;
	double value;
};

bool cmp(item i1,item i2){
	return (i1.value/i1.weight)>(i2.value/i2.weight);
}

double solve(int w, struct item arr[], int n){
	sort(arr,arr+n,cmp);
	double current=0;
	double res=0.0;
	for(int i=0;i<n;i++){
		if(current+arr[i].weight<=w){
			current+=arr[i].weight;
			res+=arr[i].value;
		}else{
			int r=w-current;
			res+=arr[i].value*((double)r/arr[i].weight);
			break;
		}
	}
	return res;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int N,W;
	cin>>N>>W;
	item arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i].value>>arr[i].weight;
	}
	double ans=solve(W,arr,N);
	cout<<fixed << setprecision(12)<<ans<<endl;
	return 0;
}
