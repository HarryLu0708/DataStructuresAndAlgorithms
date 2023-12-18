#include <stack>
#include <iostream>

using namespace std;

struct Node{
	int x,y;
};

int main(){
	stack<int> stk;
	cout<<"Put the numbers in to the stack:"<<endl; 
	for(int i=0; i<5; i++){
		cout<<i<<endl;
		stk.push(i);
	}
	cout<<"Remove numbers from the stack:"<<endl;
	for(int i=0; i<5; i++){
		cout<<stk.top()<<endl;
		stk.pop();
	}
	return 0;
}

