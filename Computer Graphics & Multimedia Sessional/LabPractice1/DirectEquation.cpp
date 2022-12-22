#include<graphic.h>
#incluse<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,y1,x2,y2,dx,dy;
	cout<<"Enter the value of x1 and y1";
	cin>>x1>>y1;
	cout<<"Enter the value of x2 and y2";
	cin>>x2>>y2;
	dx = x2-x1;
	dy = y2-y1;
	int x=x1,y=y1;
	float m,b;
	m = dy/dx;
	b = y-(m*x);
	if(m>1)
	{
		while(x<=x2)
		{
			putpixel(x,y,RED);
			x++;
			y = m*x+b;
		}
	}
	else{
		while(y<=y2)
		{
			putpixel(x,y,GREEN);
			y++;
			x = (y-b)/m;
		}
	}
return 0;
}
