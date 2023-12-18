
//Array 1 and Array 2 last question: REDO
#include <bits/stdc++.h>

using namespace std;
bool arr[100005];
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		arr[x]=true;
	}
	for(int i=0; i<n; i++){
		if(arr[i]==true)cout<<i<<'\n';
	}
	return 0;
}
--------------------------------------
#include <bits/stdc++.h>

using namespace std;
#define SIZE 100005

bool check[SIZE];


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	int N;
	cin>>N;
	
	int tmp;
	for(int i = 0; i < N; i++){
		
		cin>>tmp;
		check[tmp] = true;
	}
	
	for(int i = 0; i < SIZE; i++){
		if(check[i]){
			
			cout<<i<<"\n";
		}
	}
	
	return 0;
}
