#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	initwindow(1000,1000,"Transformation");
	int decession;
	cout<<"----------Enter the respected number for Trasformation\nTraslation Line--1\nRoatation Triangle--2\nScalling Rectangle--3\nReflection--4\nShearing--5\n";
	cin>>decession;
	switch(decession)
	{
		case 1: //2d Translation
			{
				int x1=10,y1=10,x2=50,y2=10,x3=5,y3 =50;
				setcolor(RED);
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				int tx,ty;
				cout<<"Enter the value of x and y for Translation"<<endl;
				cin>>tx>>ty;
				x1=x1+tx;
				y1 =y1+ty;
				x2 = x2+tx;
				y2 = y2+ty;
				x3 = x3+tx;
				y3 = y3+ty;
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				getch();
				break;
			}
		case 2:  //2d Rotaion
			{
				int x1=10,y1=10,x2=50,y2=10,x3 = 5,y3 = 50;
				int tx1,tx2,tx3,ty1,ty2,ty3;
				float degree,s,c;
				setcolor(RED);
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				cout<<"Enter the value of Degree for rotation of Triangle: "<<endl;
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
		case 3: //2d Scalling
			{
				int x1=10,y1=10,x2=50,y2=10,x3=5,y3 =50;
				setcolor(RED);
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				int tx,ty;
				cout<<"Enter the value of tx and ty for scalling"<<endl;
				cin>>tx>>ty;
				x1=x1*tx;
				y1=y1*ty;
				x2=x2*tx;
				y2=y2*ty;
				x3=x3*tx;
				y3=y3*ty;
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				getch();
				break;	
			}
		case 4: //2d Reflection
			{
				int x1=50,y1=150,x2=75,y2=125,x3=100,y3=150,xt;
				setcolor(RED);
				line(x1,y1,x2,y2);
				line(x2,y2,x3,y3);
				line(x3,y3,x1,y1);
				//Reflection with repect to x 
				setcolor(WHITE);
				line(x1,-y1+200,x2,-y2+200);
				line(x1,-y1+200,x3,-y3+200);
				line(x2,-y2+200,x3,-y3+200);
				getch();
				break;	
			}
		case 5: //2d Shearing
			{
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
				//rectangle along x axis;
				setcolor(RED);
				rx1=rx1+ry1*sf;
				rx2=rx2+ry2*sf;
				rectangle(rx1,ry1,rx2,ry2);
				// rectanglealong y axis;
				setcolor(GREEN);
				ry1 = ry1+rx1*sf;
				ry2 = ry2+rx2*sf;
				rectangle(rx1,ry1,rx2,ry2);
				getch();
				break;	
			}
				
		default:
			cout<<"Unnecessary input\n";
			break;	
							
	}
return 0;
}
