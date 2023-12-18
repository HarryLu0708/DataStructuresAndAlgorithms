/*
  每个月给300，利息是20%，输入是预算
 */
#include <iostream>

using namespace std;

int main(){
	int deposit=0,budget,cur=0;
	bool f=true;
	for(int i=0;i<12;i++){
		cur += 300; 
		cin>>budget;
		if(cur<budget){
			f = false;
			cout<<-(i+1)<<endl;
			break;
		}
		cur -= budget;
		deposit += cur/100;
		cur = cur%100;
	}
	if(f)cout<<deposit*120+cur<<endl;
	return 0;
}
