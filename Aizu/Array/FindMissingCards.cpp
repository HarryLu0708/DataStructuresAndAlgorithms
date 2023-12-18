#include <iostream>

using namespace std;

bool spade[13];
bool diamond[13];
bool club[13];
bool heart[13];

void traverse(bool arr[],char c){
	for(int i=0; i<13; i++){
		if(arr[i]==false){
			cout<<c<<' '<<i+1<<endl;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int x;
	char str[2];
	for(int i=0;i<n;i++)spade[i]=diamond[i]=heart[i]=club[i]=0;
	for(int i=0; i<n; i++){
		cin>>str[0]>>x;
		switch (str[0]) {
		case 'S':
			spade[x-1]=true;
			break;
		case 'D':
			diamond[x-1]=true;
			break;
		case 'C':
			club[x-1]=true;
			break;
		case 'H':
			heart[x-1]=true;
			break;
		}
	}
	//Order: SHCD
	traverse(spade,'S');
	traverse(heart,'H');
	traverse(club,'C');
	traverse(diamond,'D');
	cout<<endl;
	return 0;
}
