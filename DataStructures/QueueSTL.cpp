#include <iostream>
#include <queue>

using namespace std;

struct Node{
	int x,y;
};

int main(){
	queue<Node> q;
	
	cout<<"Push:"<<endl;
	for(int i=0; i<5; i++){
		if(!q.empty())cout<<q.back().x<<" "<<q.back().y<<endl;
		q.push({i,i+2});
	}
	
	cout<<"Pop:"<<endl;
	for(int i=0; i<5; i++){
		if(!q.empty())cout<<q.front().x<<" "<<q.front().y<<endl;
		q.pop();
	}
	return 0;
}

