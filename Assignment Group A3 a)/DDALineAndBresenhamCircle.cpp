//  Write C++ program to draw the following pattern. Use DDA line and Bresenham‘s circle 
// drawing algorithm. Apply the concept of encapsulation.

#include<graphics.h>  
#include<conio.h>  
#include<stdio.h>  
#include<iostream>
using namespace std;

//data encapsulation
class C_and_D
{
	private:
	 int x0, x1, y0, y1;  //for line
	 int r, xc, yc; //for circle
	public:
	 void dda_line(int x0,int y0, int x1,int y1);
	 void drawCircle(int x, int y, int xc, int yc); //forward declaration 
     void dCircle(int r, int xc, int yc) ; //bresenham circle function

};

void C_and_D :: dda_line(int x0,int y0, int x1,int y1) //dda line function
{
    float x, y,dx,dy,steps; 
    dx = (x1 - x0);  
    dy = (y1 - y0);  
    if(dx>=dy)  
           {  
        steps = dx;  
    }  
    else  
           {  
        steps = dy;  
    }  
    dx = dx/steps;  
    dy = dy/steps;  
    x = x0;  
    y = y0;  
    int i = 1;  
    while(i<= steps)  
    {  
        putpixel(x, y, WHITE);  
        x += dx;  
        y += dy;  
        i=i+1;  
    }  
}

void C_and_D::dCircle(int r, int xc, int yc)  //bresenham circle function
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

void C_and_D::drawCircle(int x, int y, int xc, int yc)
{
	putpixel(x+xc,y+yc,WHITE);
	putpixel(-x+xc,y+yc,WHITE);
	putpixel(x+xc, -y+yc,WHITE);
	putpixel(-x+xc, -y+yc, WHITE);
	putpixel(y+xc, x+yc, WHITE);
	putpixel(y+xc, -x+yc, WHITE);
	putpixel(-y+xc, x+yc, WHITE);
	putpixel(-y+xc, -x+yc, WHITE);
}


int main()//main function
{

    int gd = DETECT ,gm;  
    initgraph(&gd, &gm, (char*)""); 

	C_and_D obj1,obj2,obj3;  
    obj1.dda_line(250,90,100,295);         //calling of dda line, vertical left
    obj2.dda_line(250,90,405,295);         //calling of dda line, vertical right
	obj3.dda_line(100,295,405,295);        ////calling of dda line, horizontal
	obj1.dCircle(160,250,250);           //calling of circle function {big circle}
    obj2.dCircle(75,250,220);            //calling of circle function {small circle}
    getch();  
    closegraph();  
    return 0;
}  

