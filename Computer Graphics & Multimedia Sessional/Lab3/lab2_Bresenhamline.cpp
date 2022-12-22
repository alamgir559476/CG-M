#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void Bresenhamline(int x1,int y1,int x2,int y2){
	int dx,dy,inc1,inc2,d;
	float m;
	initwindow(500,600);
	dx=x2-x1;
	dy= y2-y1;
	m = dy/dx;
	d = 2*dy-dx;
	inc1 = 2*dy;
	inc2 = 2*(dy-dx);
	inc3 = 2*dx;
	inc4 = 2*(dx-dy);	
	while(x1<=x2)	
	{
		putpixel(x1,y1,4);
		cout<<x1<<y1<<endl;
		if(d<=0)
		{
			d = d+inc1;
		}
		else{
			d =d+inc2;
			y1++;
		}
		x1++;
	}
}

int main()
{
	int x1,x2,y1,y2;
	cout<<"Enter the value of x1,x2,y1,y2"<<endl;
	cin>>x1>>y1>>x2>>y2;
	Bresenhamline(x1,y1,x2,y2);
	getch();
	return 0;
}
