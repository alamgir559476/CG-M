#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
initwindow(800,800,"Line Draw");
int x1,y1,x2,y2,x,y,dy,dx,b;
float m;
cout<<"enter the x coordinates(x1,x2): ";
cin>>x1>>y1;
cout<<"enter the y coordinates(y1,y2): ";
cin>>x2>>y2;
dx=x2-x1;
dy=y2-y1;
m=dy/dx;
b=y1-(m*x1);
x=x1;
y=y1;
if(m>1)
	while(x<=x2)
	{
		putpixel(x,y,8);
		cout<<"x: "<<x<<" y: "<<y<<endl;
		x++;
		y=(m*x)+b;
	}
else
{
	while(y<=y2)
	{
		putpixel(x,y,8);
		cout<<"x: "<<x<<" y: "<<y<<endl;
		y++;
		x=(y-b)/m; 
	}
}
getch();
return 0;
}
