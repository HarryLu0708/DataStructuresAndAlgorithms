#include <vector>
#include <cstdio>

using namespace std;

int main(){
	int s;double w,h;
	vector<int> v;
	while(scanf("%d,%lf,%lf",&s,&w,&h)!=EOF){
		double BMI=w/(h*h);
		if(BMI>=25)v.push_back(s);
	}
	for(int i=0;i<(int)v.size();i++)printf("%d\n",v[i]);
	return 0;
}
