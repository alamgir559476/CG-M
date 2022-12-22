#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bresenham_circle(int x1, int y1, int r)
	{
		float d,x,y;
		x=0;
		y = r;
		d = 1-r;
		
		while(x<=y)
			{
				/*
			    putpixel(x1+x,y1+y,WHITE);
				putpixel(x1-x,y1+y,RED);
				putpixel(x1+x,y1-y,WHITE);
				putpixel(x1-x,y1-y,WHITE);
				putpixel(x1+y,y1+x,RED);
				putpixel(x1+y,y1-x,WHITE);
				putpixel(x1-y,y1+x,WHITE);
				putpixel(x1-y,y1-x,RED);
				*/
			
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
					d = d+(2*x)+3;
				}
				else
				{
					d=d+(2*(x-y))+5;
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


