#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v={1,23,1,2};
	
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(4);
	v.push_back(1);
	v.push_back(4);
	v.push_back(2);
	v.push_back(4);
	
	cout<<v.size()<<endl;
	cout<<v[1]<<endl;
	for(int n: v){
		cout<<n<<endl;
	}
	
	return 0;
}
