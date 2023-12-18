#include <iostream>
#include <stack>

using namespace std;

int main(){
	int N;
	cin>>N;
	char str[N];
	cin>>str;
	cout<<str<<endl;
	cout<<"Two Pointers Method: "<<tpReserveStr(str)<<endl;
	cout<<"Stack Method: "<<stkReserveStr(str)<<endl;
}
