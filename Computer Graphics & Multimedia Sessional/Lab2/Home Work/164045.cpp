/*
	Name: Sabbir Hossain;
	Id: 164045;
	CSE (4/2)
*/

#include<graphics.h>
int main()
{
	int frontRoof[] = {200,150,800,150,900,300,300,300,200,150};
	int frontTriangle[] = {200,150,300,300,100,300,200,150};
	int leftSideWall[]={100,300,300,300,300,500,100,500,100,300};
	int frontWall[] = {300,300,900,300,900,500,300,500,300,300};
	int window1[] = {400,350,520,350,520,420,400,420,400,350};
	int window2[] = {620,350,740,350,740,420,620,420,620,350};
	int Road[] = {150,500,250,500,200,700,50,700,150,500};
	int Door[] = {150,350,250,350,250,500,150,500,150,350};
	int DoorHandle[]  = {160,420,175,420,175,440,160,440,160,420};
	
	initwindow(1000,1000);
	//Draw Front Roof and fill with blue
	setfillstyle(SOLID_FILL,1);
	fillpoly(5,frontRoof);
	
	//Draw left Triangle and fill with green
	setfillstyle(SOLID_FILL,2);
	fillpoly(4,frontTriangle);
	
	//Draw leftSideWall and fill with Red
	setfillstyle(SOLID_FILL,4);
	fillpoly(5,leftSideWall);
	
	//Draw Door and fill with Hatch Fill
	setfillstyle(0,6);
	fillpoly(5,Door);
	
	//Draw Door handle and fill with interleave
	setfillstyle(9,6);
	fillpoly(5,DoorHandle);
	
	//Draw frontWall and fill with Light Blue
	setfillstyle(SOLID_FILL,9);
	fillpoly(5,frontWall);
	
	//Draw window1 and fill with line
	setfillstyle(2,6);
	fillpoly(5,window1);
	
	//Draw window2 and fill with line
	setfillstyle(2,6);
	fillpoly(5,window2);	
	
	//Draw Road and fill with Slash
	setfillstyle(3,6);
	fillpoly(5,Road);

	getch();
return 0;
}
