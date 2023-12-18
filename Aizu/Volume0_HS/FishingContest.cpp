#include <iostream>
#include <algorithm>

using namespace std;

struct Contestant{
	int id,rating;
};

Contestant contestants[20];

int n,a,v;

void sort(){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(contestants[i].rating<contestants[j].rating)swap(contestants[i],contestants[j]);
		}
	}
}

void solve(){
	int f=contestants[0].rating,id=contestants[0].id;
	for(int i=0;i<n;i++){
		if(f!=contestants[i].rating)break;
		if(id>contestants[i].id)id=contestants[i].id;
	}
	cout<<id<<' '<<f<<endl;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>v;
		contestants[i].id=a;
		contestants[i].rating=v;
	}
	sort();
	solve();
	return 0;
}
