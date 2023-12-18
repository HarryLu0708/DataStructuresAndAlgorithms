/*
  Input:depth n
  Output: print each point(x,y) of the koch curve, start with (0,0), and end with (100,0). error at most 10-4
  Constraints: 10<=6<=6
  Algorithm:
  - divide a given segment into three equal segments
  - Replace the middle segment by the two sides of an equilateral triangle (s, u, t) of the same length as the segment.
  - Repeat this procedure recursively for new segments (p1, s), (s, u), (u, t), (t, p2).
  Solution:
  - Koch(d,p1,p2): 
  -- d: depth
  -- p1 and p2: the points
  Need to know:
  - koch curve and matrices
  - angle to arc
 */

//Program
#include <bits/stdc++.h>

using namespace std;

struct Point{double x,y;};

void koch(int d,Point p1, Point p2){
	if(d==0)return;
	Point s,t,u;
	//Calculation: vector calculation
	s.x=(2*p1.x+p2.x)/3;
	s.y=(2*p1.y+p2.y)/3;
	t.x=(1*p1.x+2*p2.x)/3;
	t.y=(1*p1.y+2*p2.y)/3;
	
	//Angle
	double arc=M_PI*60.0/180.0;
	
	u.x=(t.x-s.x)*cos(arc)-(t.y-s.y)*sin(arc)+s.x;
	u.y=(t.x-s.x)*sin(arc)+(t.y-s.y)*cos(arc)+s.y;
	
	koch(d-1,p1,s);//expand p1-s
	printf("%.8f %.8f\n",s.x,s.y);//Print point s
	koch(d-1,s,u);//expand s-u
	printf("%.8f %.8f\n",u.x,u.y);//Print point u
	koch(d-1,u,t);//expand u-t
	printf("%.8f %.8f\n",t.x,t.y);//Print point t
	koch(d-1,t,p2);//expand t-p2
}

int main(){
	//std::ios::sync_with_stdio(false);std::cin.tie(0);
	int n;
	Point a,b;
	a.x=0;
	a.y=0;
	b.x=100;
	b.y=0;
	scanf("%d",&n);
	printf("%.8f %.8f\n",a.x,a.y);
	koch(n,a,b);
	printf("%.8f %.8f\n",b.x,b.y);
	return 0;
}
