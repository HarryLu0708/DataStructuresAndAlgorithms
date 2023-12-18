#include <bits/stdc++.h>

using namespace std;

class Queue{
private:
	int arr[400000];
	int n=-1;
public:
	void push(int d,int x){
		if(d==1){
			n++;
			arr[n]=x;
		}else{
			for(int i=0; i<=n; i++)arr[i+1]=arr[i];
			n++;
			arr[0]=x;
		}
	}
	int randomAccess(int p){
		return arr[p];
	}
	void pop(int d){
		if(d==1){
			n--;
		}else{
			for(int i=0; i<=n; i++)arr[i]=arr[i+1];
			n--;
		}
	}
	void printAll(){
		for(int i=0; i<=n; i++)cout<<arr[i]<<' ';
		cout<<endl;
	}
};

int main(){
	Queue queue;
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int t;
		cin>>t;
		switch (t) {
		case 0:
			int d,x;
			cin>>d>>x;
			queue.push(d,x);
			//queue.printAll();
			break;
		case 1:
			int p;
			cin>>p;
			cout<<queue.randomAccess(p)<<'\n';
			break;
		case 2:
			int a;
			cin>>a;
			queue.pop(a);
			//queue.printAll();
			break;
		}
	}
	return 0;
}
