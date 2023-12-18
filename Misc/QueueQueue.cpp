#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> que;
	cout<<"Put the numbers into the queue:"<<endl;
	for(int i=0; i<5; i++){
		que.push(i);
		cout<<i<<endl;
	}
	cout<<"Remove the number from queue:"<<endl;
	for(int i=0; i<5; i++){
		cout<<que.front()<<endl;
		que.pop();
	}
}

