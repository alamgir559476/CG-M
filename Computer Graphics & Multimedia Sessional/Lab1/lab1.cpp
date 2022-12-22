#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
	initwindow(800,800," Window size");
	float x, y, m;
	float x1,y1,x2,y2,c;
	cout<<"Enter x1 and y1:";
	cin>>x1>>y1;
	cout<<"Enter x2 and y2:";
	cin>>x2>>y2;
	cout<<endl<<x1<<" "<<y2<<endl;
	m = (y2-y1)/(x2-x1);
	c= y1 - m* x1;
	if(m<1)
	{
		x = x1;
		while(x<=x2)
		{
			y = m*x + c;
			putpixel(round(x),round(y),15);
			cout<<"x:"<<round(x)<<", y :"<<round(y)<<endl;
			delay(100);
			x++;
		}
	}
	else if(m>=1)
	{
		y = y1;
		while(y<=y2)
		{
			x = (y-c)/m;
			putpixel(round(x),round(y),15);
			cout<<"x:"<<round(x)<<", y :"<<round(y)<<endl;
			delay(100);
			y++;
		}
	}
	while(!kbhit()){
	}
	return 0;
}
