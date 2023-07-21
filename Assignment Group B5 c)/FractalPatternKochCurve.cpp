//  Write C++ program to generate fractal patterns by using Koch curves.

#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

void koch_fill(int x1, int y1, int x2, int y2, int i)
{

 float angle=(60*M_PI)/180;
 int x3=((2*x1)+x2)/3;
 int y3=((2*y1)+y2)/3;
 int x4=((2*x2)+x1)/3;
 int y4=((2*y2)+y1)/3;
 
 int x=x3+((x4-x3)*cos(angle)) +((y4-y3)*sin(angle));
 int y=y3-((x4-x3)*sin(angle)) +((y4-y3)*cos(angle));
 
 if (i>=3)
 {
  
   koch_fill(x1,y1,x3,y3,i-1);
   koch_fill(x3,y3,x,y,i-1);
   koch_fill(x,y,x4,y4,i-1);
   koch_fill(x4,y4,x2,y2,i-1); 
 }
 else
 {
   line(x1,y1,x3,y3);
   line(x3,y3,x,y);
   line(x,y,x4,y4);
   line(x4,y4,x2,y2); 
 
 }
}

int main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,NULL);
 koch_fill(100,200,400,200,5);
 koch_fill(400,200,250,400,5);
 koch_fill(250,400,100,200,5);
 
 
 getch();
 closegraph();
}
