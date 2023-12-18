#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;cin.ignore();
	for(int j=0;j<n;j++){
		string s;
		getline(cin,s);
		int i=0;
		for(;;){
			i=s.find("Hoshino",i);
			if(i==string::npos)break;
			s.replace(i,7,"Hoshina");
		}
		cout<<s<<endl;
	}
	return 0;
}
