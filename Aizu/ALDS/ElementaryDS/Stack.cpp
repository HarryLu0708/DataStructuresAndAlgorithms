#include<bits/stdc++.h>

using namespace std;

struct MyStack{
private:
	int i=-1;
	int arr[1000];
public:
	void push(int x){
		i++;
		arr[i]=x;
	}
	int pop(){
		i--;
		return arr[i+1];
	}
	int top(){
		return arr[i];
	}
};

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	MyStack stk;
	char x[100];
	int a,b;
	while(cin>>x){
		if(x[0]=='+'){
			a=stk.pop();
			b=stk.pop();
			stk.push(a+b);
		}
		else if(x[0]=='-'){
			a=stk.pop();
			b=stk.pop();
			stk.push(b-a);	
		}
		else if(x[0]=='*'){
			a=stk.pop();
			b=stk.pop();
			stk.push(a*b);	
		}
		else{
			stk.push(atoi(x));
		}
	}
	cout<<stk.pop()<<'\n';
	return 0;
}
