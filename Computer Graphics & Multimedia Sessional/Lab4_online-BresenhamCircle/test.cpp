#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
using namespace std;

void BresenhamCircle(float x1,float y1,float r)
{
	int cen1 = getmaxx();
	int cen2 = getmaxy();
	float x,y,p;
	x1 = cen1+x1;
	y1 = cen2+y1;
	x=0;
	y=r;
	p=3-(2*r);
	while(x<=y)
	{
		putpixel(x1+x,y1+y,GREEN);
		putpixel(x1-x,y1+y,GREEN);
		putpixel(x1+x,y1-y,GREEN);
		putpixel(x1-x,y1-y,GREEN);
		putpixel(x1+y,y1+x,GREEN);
		putpixel(x1+y,y1-x,GREEN);
		putpixel(x1-y,y1+x,GREEN);
		putpixel(x1-y,y1-x,GREEN);
		x=x+1;
		if(p<0)
		{
			p=p+4*(x)+6;
		}
		else
		{
			p=p+4*(x-y)+10;
			y=y-1;



		}
		delay(20);

	}
}

int main()
{
	float x1,y1,r;
	initwindow(800,600);
	cout<<"Enter the starting co-ordinates of a center:";
	cin>>x1>>y1;
	cout<<"Enter the value of radius:";
	cin>>r;
	BresenhamCircle(x1,y1,r);
	getch();
	
	return 0;
}
