#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

struct Tuple{
	ll value;
	ll weight;
	char type;
	ll date;
	string name;
	bool operator<(const struct Tuple &arg) const{
		if(value!=arg.value)return value<arg.value;
		else if(weight!=arg.weight)return weight<arg.weight;
		else if(type!=arg.type)return type<arg.type;
		else if(date!=arg.date)return date<arg.date;
		else return name<arg.name;
	}
};

Tuple arr[100006];

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i].value>>arr[i].weight>>arr[i].type>>arr[i].date>>arr[i].name;
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)cout<<arr[i].value<<' '<<arr[i].weight<<' '<<arr[i].type<<' '<<arr[i].date<<' '<<arr[i].name<<'\n';
	return 0;
}
