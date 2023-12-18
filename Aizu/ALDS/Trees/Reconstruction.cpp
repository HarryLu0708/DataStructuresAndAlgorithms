#include <bits/stdc++.h>
//这个算法是基于我们选择一个preorder中的元素，当该元素出现在inorder的列表中时，该元素在inorder列表右侧是该元素的右子树，左侧是左子树。根据这样的性质，我们设计了如此的算法
using namespace std;

int n,pos;
vector<int> pre,in,post;

//Rec Function: find the position of each node when we traverse tree in postorder
void rec(int l,int r){
	if(l>=r)return;
	int root=pre[pos++];//Determine pivot
	int m=distance(in.begin(),find(in.begin(),in.end(),root));//find the mid point btw first element in the list and the end point
	//Recursion solve the left side and right side of the pivot point
	rec(l,m);
	rec(m+1,r);
	post.push_back(root);//Push Root to the list
}

//Solve Function
void solve(){
	pos=0;//the index that we start traverse pre list
	rec(0,pre.size());//Find
	//Print
	for(int i=0;i<n;i++){
		if(i)cout<<' ';
		cout<<post[i];
	}
	cout<<'\n';
}

int main(){
	std::ios::sync_with_stdio(false);std::cin.tie(0);
	int k;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		pre.push_back(k);
	}
	for(int i=0;i<n;i++){
		cin>>k;
		in.push_back(k);
	}
	solve();
	return 0;
}
