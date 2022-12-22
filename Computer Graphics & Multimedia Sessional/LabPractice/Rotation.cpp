#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	initwindow(1500,1500,"Transformation");
	int decession;
	cout<<"----------Enter the respected number for Rotation\n Rotation Line--1\nRoatation Triangle--2\nRoatation Rectangle--3\n";
	cin>>decession;
	switch(decession)
	{
		case 1: //Line--1\nRoatation
			{
				int  x1=100,y1=100,x2=200,y2=200;
				int tx,ty;
				float degree,s,c;
				setcolor(RED);
				line(x1,y1,x2,y2);
				cout<<"Enter the valuel of Angle for Rotation\n";
				cin>>degree;
				degree = 3.1416*degree/180.0;
				s = sin(degree);
				c = cos(degree);
				tx = x2*c - y2*s;
				ty = x2*s + y2*c;
				setcolor(GREEN);
				line(x1,y1,tx,ty);
				getch();
				break;				
			}
		case 2: //Triangle--2\nRoatation
			{
				int x1=10,y1=10,x2=50,y2=10,x3 = 5,y3 = 50;
				int tx1,tx2,tx3,ty1,ty2,ty3;
				float degree,s,c;
				setcolor(RED);
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				cout<<"Enter the value of Degree for rotation: "<<endl;
				cin>>degree;
				degree = 3.1416*degree/180.0;
				s = sin(degree);
				c = cos(degree);
				tx1 = x1*c-y1*s;
				ty1 = x1*s +y1*c;
				tx2 = x2*c - y2*s; 
				ty2 = x2*s + y2*c;
				tx3 = x3*c - y3*s;
				ty3 = x3*s + y3*c;
				setcolor(GREEN);
				line(tx1,ty1,tx2,ty2);
				line(tx2,ty2,tx3,ty3);
				line(tx3,ty3,tx1,ty1);
				getch();
				break;
			}
		case 3: //Rectangle Rotation
			{	int x1=100,y1=100,x2=200,y2=200;
				setcolor(RED);
				rectangle(100,100,200,200);
				cout<<"Enter the value of engale for rotation: "<<endl;
				float degree,s,c;
				cin>>degree;
				degree = 3.1416*degree/180.0;
				s = sin(degree);
				c = cos(degree);
				int tx1,ty1,tx2,ty2;
				tx1 = x1*c - y1*s;
				ty1 = x1*s + y1*c;
				tx2 = x2*c - y2*s;
				ty2 = x2*s + y2*c;
				rectangle(tx1,ty1,tx2,ty2);
				getch();
				break;	
			}
				
		default:
			cout<<"Unnecessary input\n";
			break;	
							
	}
return 0;
}
