#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main(){
	string s;
	
	while(getline(cin,s)){
		int len=s.size();
		for(int i=0; i<len; i++){
			int si=int(s[i]);
			if(si>=65&&si<=90)arr[si-int('A')]++;
			else if(si>=97&&si<=122)arr[si-int('a')]++;
		}
	}
	for(int i=0; i<26; i++){
		cout<<char(i+97)<<" : "<<arr[i]<<"\n";
	}
	return 0;
}
