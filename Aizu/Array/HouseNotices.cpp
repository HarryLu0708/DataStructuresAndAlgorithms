#include <iostream>

using namespace std;

void printOut(int arr[3][10]){
	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			cout<<' '<<arr[i][j];
		}
		cout<<endl;
	}
}

void printLine(){
	//for(int i=0; i<20; i++)cout<<'#';
	cout<<"####################"<<endl;
}
//b: building number
//f: floor
//r: room
//v: visitors +/- -> enter/leave

int main(){
	
	//Initialize
	int buildingA[3][10],buildingB[3][10],buildingC[3][10], buildingD[3][10];
	for(int i=0; i<3; i++){
		for(int j=0; j<10; j++){
			buildingA[i][j]=buildingB[i][j]=buildingC[i][j]=buildingD[i][j]=0;
			}
		cout<<endl;
	}
	//Receive Input
	int n;
	cin>>n;
	//Processing Input
	for(int i=0; i<n; i++){
		int b,f,r,v;
		cin>>b>>f>>r>>v;
		switch (b) {
		case 1:
			buildingA[f-1][r-1]+=v;
			break;
		case 2:
			buildingB[f-1][r-1]+=v;
			break;
		case 3:
			buildingC[f-1][r-1]+=v;
			break;
		case 4:
			buildingD[f-1][r-1]+=v;
			break;
		}
	}
	//Print
	printOut(buildingA);
	printLine();
	printOut(buildingB);
	printLine();
	printOut(buildingC);
	printLine();
	printOut(buildingD);
	return 0;
}
