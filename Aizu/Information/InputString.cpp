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
	istringstream numlist(input);
	vector<int> nums;
	int num;
	while(numlist>>num)nums.push_back(num);
	int len=nums.size();
	for(int j=0; j<len; j++)cout<<(nums[j]+1+i)<<" ";
	cout<<"\n";
	}
	return 0;
}
