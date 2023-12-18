#include <iostream>

using namespace std;

int main(){
	int total,cnt=0;
	cin>>total;
	int tmp=total/25;
	cnt+=tmp;
	total-=tmp*25;
	
	tmp=total/10;
	cnt+=tmp;
	total-=tmp*10;
	
	tmp=total/5;
	cnt+=tmp;
	total-=tmp*5;
	
	tmp=total;
	cnt+=tmp;
	
	cout<<cnt<<endl;
	return 0;
}
