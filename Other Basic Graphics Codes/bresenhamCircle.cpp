#include<conio.h>
#include<graphics.h>
#include<iostream>
#include<graphics.h>  
#include<conio.h>  
#include<stdio.h>  
#include<iostream>
using namespace std;

void drawCircle(int x, int y, int xc, int yc); //forward declaration 
void dCircle(int r, int xc, int yc)  //bresenham circle function
{
    int pk, x, y;   
	pk = 3 - 2*r;
	x=0; y = r;
	while(x < y)
	{
		if(pk <= 0)
		{
			pk = pk + (4*x) + 6;
			drawCircle(++x,y,xc,yc);
		}
		else
		{
			pk = pk + (4*(x-y)) + 10;
			drawCircle(++x,--y,xc,yc);
		}
	}
}
void drawCircle(int x, int y, int xc, int yc)
{
	putpixel(x+xc,y+yc,GREEN);
	putpixel(-x+xc,y+yc,GREEN);
	putpixel(x+xc, -y+yc,GREEN);
	putpixel(-x+xc, -y+yc, GREEN);
	putpixel(y+xc, x+yc, GREEN);
	putpixel(y+xc, -x+yc, GREEN);
	putpixel(-y+xc, x+yc, GREEN);
	putpixel(-y+xc, -x+yc, GREEN);
}


int main()//main function
{

    int gd = DETECT ,gm;  
    int x0, x1, y0, y1;  //for line
	int r, xc, yc; //for circle
    initgraph(&gd, &gm, (char*)"");   
	dCircle(100,100,100);           //calling of circle function
    getch();  
    closegraph();  
    return 0;
}  
