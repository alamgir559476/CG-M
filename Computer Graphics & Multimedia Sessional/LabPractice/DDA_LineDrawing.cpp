#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	initwindow(800,800,"DDA Line Algorithom");
	float x1,y1,x2,y2,m,steps,dx,dy,xinc,yinc;
	cout<<"Enter the value of x1 and y1: "<<endl;
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2"<<endl;
	cin>>x2>>y2;
	dx = x2 -x1;
	dy = y2 -y1;
	if(abs(dx)>abs(dy))
	{
		steps = abs(dx);
	}
	else
	steps = abs(dy);
	
	xinc = dx/steps;
	yinc = dy/steps;
	
	for(int i=1;i<=steps;i++)
	{
		putpixel(x1,y1,RED);
		x1 = x1+xinc;
		y1 = y1+yinc;
	}	
getch();
return 0;
}
