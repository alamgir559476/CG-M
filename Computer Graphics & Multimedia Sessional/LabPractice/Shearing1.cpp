#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	initwindow(800,700,"Shearing");
	int x1=50,y1=150,x2=75,y2=125,x3=100,y3=150;
	float sf;
	setcolor(RED);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	cout<<"Enter shearing Factor"<<endl;
	cin>>sf;
	//Triangle alogn x axis;
	x1 = x1+y1*sf;
	x2 = x2+y2*sf;
	x3 = x3+y3*sf;
	setcolor(WHITE);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	
	//Triangle alogn y axis;
	y1= y1+x1*sf;
	y2=y2+x2*sf;
	y3=y3+x3*sf;
	setcolor(GREEN);
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);
	
	setcolor(BLUE);
	float rx1=200,ry1=200,rx2=300,ry2=300;
	rectangle(rx1,ry1,rx2,ry2);
	//along x axis;
	setcolor(RED);
	rx1=rx1+ry1*sf;
	rx2=rx2+ry2*sf;
	rectangle(rx1,ry1,rx2,ry2);
	//along y axis;
	setcolor(GREEN);
	ry1 = ry1+rx1*sf;
	ry2 = ry2+rx2*sf;
	rectangle(rx1,ry1,rx2,ry2);	
	
	getch();	
return 0;
}
