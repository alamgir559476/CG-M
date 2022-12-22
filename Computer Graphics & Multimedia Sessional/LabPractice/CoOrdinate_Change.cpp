#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	initwindow(500,500,"NewCoOrdinate");
	int x = getmaxx();
	int y = getmaxy();
	int halfx = x/2,halfy = y/2;
	setcolor(RED);
	rectangle(0,0,x,y);
	setcolor(GREEN);
	line(halfx,0,halfx,y);
	line(0,halfy,x,halfy);
	setcolor(RED);
	line(halfx+50,halfy-50,halfx+100,halfy-100);
	circle(halfx-100,halfy-100,30);
	getch();
	return 0;
}
