#include <iostream>

using namespace std;

int main(){
	int const max = 8;
	int day,hours;
	day = 0;
	for(int i=0; i<7; i++){
		int schoolTime, extraTime;
		cin>>schoolTime>>extraTime;
		if(schoolTime+extraTime>max){
			if(hours==schoolTime+extraTime){
				continue;
			}
			hours = schoolTime+extraTime;
			day = i+1;
		}
	}
	cout<<"Day: "<<day<<endl;
	
	return 0;
}
