#include <iostream>

using namespace std;

int main(){
	double w;
	while(cin>>w){
		if(w<=48.0)cout<<"light fly\n";
		else if(w<=51.0)cout<<"fly\n";
		else if(w<=54.0)cout<<"bantam\n";
		else if(w<=57.0)cout<<"feather\n";
		else if(w<=60.0)cout<<"light\n";
		else if(w<=64.0)cout<<"light welter\n";
		else if(w<=69.0)cout<<"welter\n";
		else if(w<=75.0)cout<<"light middle\n";
		else if(w<=81.0)cout<<"middle\n";
		else if(w<=91.0)cout<<"light heavy\n";
		else cout<<"heavy\n";
	}
	return 0;
}
