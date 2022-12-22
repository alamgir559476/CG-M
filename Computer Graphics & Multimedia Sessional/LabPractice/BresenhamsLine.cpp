#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void Bresenhams(int  x1,int y1,int x2,int y2)
{
	int dx,dy,inc1,inc2,inc3,inc4,d;
	float m;
	dx = x2-x1;
	dy = y2-y1;
	m = dy/dx;
	d = (2*dx)-dy;
	inc1 = 2*dy;
	inc2 = 2*(dy-dx);
	inc3 = 2*dx;
	inc4 = 2*(dx-dy);
	if(m<1)
	{
		while(x1<=x2)
		{
			putpixel(x1,y1,RED);
			if(d<0)
			{
				d = d+inc1;
			}
			else{
				d = d+inc2;
				y1++;
			}
			x1++;
		}		
	}
	else{
		while(y1<=y2)
		{
			putpixel(x1,y1,RED);
			if(d<0)
			{
				d = d+inc1;
			}
			else{
				d = d+inc2;
				x1++;
			}
			y1++;
		}
	}
	getch();
}

int main()
{
	initwindow(800,800,"BresenhamsLine");
	int x1,y1,x2,y2;
	cout<<"Enter the value of x1 and y1:";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2: ";
	cin>>x2>>y2;
	Bresenhams(x1,y1,x2,y2);
	return 0;
}
