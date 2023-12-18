#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	stack<string> stk;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s=="READ"){
			cout<<stk.top()<<endl;
			stk.pop();
		}else stk.push(s);
	}
	return 0;
}
