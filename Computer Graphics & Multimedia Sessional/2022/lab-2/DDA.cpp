#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;

int Round(float p)
{
	float a;
	a = p - int(p);
	if(a>=0.5)
		return int(p)+1;
	else return int(p);
	
}

int main()
{
	initwindow(300,300,"Draw a Line");
	
	int x1, y1, x2, y2, dx, dy;
	cout << "Enter the value of x1 and y1: ";
	cin >> x1 >> y1;
	cout << "Enter the value of x2 and y2: ";
	cin >> x2 >> y2;
	
/*
	int X,Y;
	float new_x,new_y;
	X = getmaxx();
	Y = getmaxy();
	
	rectangle(0,0,X,Y);
	line(X/2,0,X/2,Y);
	line(0,Y/2,X,Y/2);
	
	new_x = X/2;
	new_y = Y/2;	
*/	
	int x, y;
	float yin,xin, m,minv;
	m = float(y2-y1)/float(x2-x1);
	
	if(m<=1)
	{
		cout << "For m<=1" << endl;
		x = x1;
		yin = y1;
		while(x<=x2)
		{
			y = Round(yin);
			putpixel(x,y,15);
			yin = yin + m;
			x++;
		}
	}
	else
	{
		cout << "For m>1" << endl;
		y = y1;
		xin = x1;
		minv = 1/m;
		while(y<=y2)
		{
			x = Round(xin);
			putpixel(x,y,15);
			xin = xin + minv;
			y++;
		}
	}
	
	while(!kbhit())
	{
		delay(200);
	}
	getch();
	return 0;
}
