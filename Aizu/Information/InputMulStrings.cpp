//use get line as input
//separate string by sstream
//input sstream into a vector
//use for loop print whole vector
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	int n;
	cin>>n;
	cin.ignore();
	for(int i=0; i<n; i++){
		string input;
		getline(cin,input);
		stringstream numlist(input);
		vector<string> nums;
		string num;
		while(numlist>>num)nums.push_back(num);
		int len=nums.size();
		for(int j=len-1; j>=0; j--){
			if(j==0)cout<<(nums[j]);
			else cout<<(nums[j])<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
