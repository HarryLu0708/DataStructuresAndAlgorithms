#include <iostream>

using namespace std;

template<int N, typename T>
struct Array{
private:
	T arr[N];
public:
	int getSize(){
		return N;
	}
	T get(int rank){
		return arr[rank];
	}
	void set(int rank, T element){
		arr[rank] = element;
	}
};

int main(){
	Array<5,int> a;
	cout<<a.getSize()<<endl;
	for(int i=0; i<a.getSize(); i++){
		a.set(i, i);
	}
	for(int j=0; j<a.getSize(); j++){
		cout<<a.get(j)<<endl;
	}
	return 0;
}
