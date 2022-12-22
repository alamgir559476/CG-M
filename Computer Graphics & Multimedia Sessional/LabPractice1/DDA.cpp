#include<graphic.h>
#incluse<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,dx,dy;
	cout<<"Enter the value of x1 and y1";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2";
	cin>>x2>>y2;
	dx = x2-x1;
	dy = y2-y1;
	int steps,xinc,yinc;
	if(abs(dx)>abs(dy))
		steps=abs(dx);
	else
		steps = abs(dy);
	xinc = dx/steps;
	yinc = dy/steps;
	
	for(int i=0;i<steps;i++)
	{
		putpixel(x1,y1,RED);
		x1 = x1+xinc;
		y1 = y1+yinc;
	}
