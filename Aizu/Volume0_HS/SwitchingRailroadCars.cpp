#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<int> s;
	int cn;
	while(cin>>cn){
		if(cn==0){
			cout<<s.top()<<'\n';
			s.pop();
		}else s.push(cn);
	}
	return 0;
}
