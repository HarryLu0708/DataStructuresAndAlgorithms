#include <iostream>

using namespace std;

int n,k;
int arr[n];

bool dfs(int i, int sum){
	if(i==n)return sum==k;
	
	if(dfs(i+1,sum))return true;
	
	if(dfs(i+1, sum+a[i]))return true;
	
	return false;
}

void solve(){
	if(dfs(0,0))cout<<"Yes."<<endl;
	else cout<<"No."<<endl;
}

int main(){
	n=4;
	arr={1,2,4,7};
	k=13;
	cout<<solve()<<endl;
}
