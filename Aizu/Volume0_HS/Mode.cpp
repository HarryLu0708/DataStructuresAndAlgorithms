#include <iostream>
#include <vector>

using namespace std;

int a[101];

int main(){
	int x;vector<int> v;
	while(cin>>x)a[x]++;
	int max=0;
	for(int i=1;i<101;i++)if(max<a[i])max=a[i];
	for(int i=1;i<101;i++)if(a[i]==max)v.push_back(i);
	for(int i=0;i<(int)v.size();i++)cout<<v[i]<<'\n';
	return 0;
}
