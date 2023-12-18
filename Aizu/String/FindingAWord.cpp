#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans=0;
	string str,word;
	cin>>word;
	int l=word.size();
	for(int i=0;i<l;i++)word[i]=tolower(word[i]);
	while(true){
		cin>>str;
		if(str=="END_OF_TEXT")break;
		l=str.size();
		for(int i=0;i<l;i++)str[i]=tolower(str[i]);
		if(str==word)ans++;
	}
	cout<<ans<<"\n";
	return 0;
}
