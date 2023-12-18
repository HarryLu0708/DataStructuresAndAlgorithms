#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	int const answer = rand()%100+1;
	int userInput;
	int i=1;
	
	while(true){
		cout<<"Input a number btween 1 and 100 to guess a number:";
		cin>>userInput;
		if(userInput==answer){
			cout<<"You guess is right! The answer is "<<answer<<"!"<<endl;
			cout<<"You total guess time is "<<i<<"!"<<endl;
			break;
		}
		
		if(userInput>answer){
			cout<<"This number is to big! Try a smaller one!"<<'\n';
		}
		else if(userInput<answer){
			cout<<"This number is to small! Try a bigger one!"<<'\n';
		}
		
		i++;
	}
	
	return 0;
}


