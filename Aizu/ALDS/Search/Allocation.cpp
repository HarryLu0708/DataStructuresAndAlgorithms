/*
  Variables:
  - n: the numbers of packages
  - w_i: the weight of package
  - k: the numbers of trucks
  - P: max common load of a truck
  Input: n,k,w
  Output: min value of P
  Constraints:
  - 1-n-100000
  - 1-k-100000
  - 1-w-10000
  Methology:
  - v=f(P): v is the total packages of packages. 该函数计算当承载量为P时可承载的总重量v
  - P increment from 0, the first P that make v greater or larger than n is the answer
  - "P increase, v will not decrease", so we can use binary search to solve this problem
 */
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,k;
ll T[100000];

//use packages number as a variable to guess P in solve function
int check(ll P){
	int i=0;//track packages
	for(int j=0;j<k;j++){//traverse all the trucks
		ll s=0;//track the weight of a truck
		while(s+T[i]<=P){
			s+=T[i];
			i++;
			if(i==n)return n;
			//if i meets n(total packages, then return n)
		}
	}
	return i;//return the total packages guess in this round;
}

int solve(){
	ll left=0;
	ll right=100000*10000;
	ll mid;
	while(right-left>1){//Integer Binary Search
		mid=(left+right)/2;//guess value
		if(check(mid)>=n)right=mid;
		else left=mid;
	}
	return right;
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>T[i];
	cout<<solve()<<'\n';
	
	return 0;
}

