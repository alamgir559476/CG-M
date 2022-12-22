#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bresenham_circle(int x1, int y1, int r)
	{
		int d,x,y;
		x=0;
		y = r;
		d = 3-(2*r);		
		while(x<=y)
			{
				putpixel(x+x1, y+y1, YELLOW);
				putpixel(-x+x1, -y+y1, YELLOW);
				
				putpixel(y+x1, x+y1, RED);
				putpixel(-y+x1, -x+y1, RED);
				
				putpixel(-y+x1, x+y1, BLUE);
				putpixel(y+x1, -x+y1, BLUE);
			
				putpixel(-x+x1, y+y1, GREEN);
				putpixel(x+x1, -y+y1, GREEN);
			
				if(d<0)
				{
					d = d+(4*x)+6;
				}
				else
				{
					d=d+(4*(x-y))+10;
					y--;
				}
				x++;
			}		
	}	
	int main()
		{
			initwindow(800,800, "Window create");
			int h=200,k=200,r=100;
			//cout<<"Enter the value of h,k,r : ";
			//cin>>h>>k>>r;
			bresenham_circle(h,k,r);
			getch();
			return 0;
		}


