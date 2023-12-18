#include <string>
#include <iostream>
#include <vector>

typedef unsigned long long ull;

using namespace std;

const ull B=100000007;

vector<int> prefix_function(string s) {
	int n = (int)s.length();
	vector<int> pi(n);
	for (int i = 1; i < n; i++) {
		int j = pi[i - 1];
		while (j > 0 && s[i] != s[j]) j = pi[j - 1];
		if (s[i] == s[j]) j++;
		pi[i] = j;
	}
	return pi;
}


vector<int> find_occurrences(string text, string pattern) {
	string cur = pattern + '#' + text;
	int sz1 = text.size(), sz2 = pattern.size();
	vector<int> v;
	vector<int> lps = prefix_function(cur);
	for (int i = sz2 + 1; i <= sz1 + sz2; i++) {
		if (lps[i] == sz2)
			v.push_back(i - 2 * sz2);
	}
	return v;
}

int main(){
	string a;
	cin>>a;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		string b;
		cin>>b;
		vector<int> v=find_occurrences(a,b);
		if(v.size()>0)cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}


