/*
  for(i=0,j=0;i<n;i++){
	  while(i>j&&check(i,j))j++
	  具体逻辑
  }
  用途：优化算法效率
  一开始想一个朴素方法，然后进行优化
  通过找i和j的规律来优化算法
 */

#include <iostream>
#include <string.h>

using namespace std;

int main(){
	char s[1000];
	gets(s);
	int n=strlen(s);
	for(int i=0;i<n;i++){
		int j=i;
		while(j<n&&s[j]!=' ')j++;
		for(int k=i;k<=j;k++)cout<<s[k];
		cout<<'\n';
		i=j;
	}
	return 0;
}
