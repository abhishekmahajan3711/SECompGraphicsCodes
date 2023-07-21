
#include<graphics.h>  
#include<conio.h>  
#include<stdio.h>  
void dda_line(int x0,int y0, int x1,int y1)
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
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;  
        i=i+1;  
    }  
}
int main()
{

    int gd = DETECT ,gm;  
    int x0, x1, y0, y1;  
    initgraph(&gd, &gm, (char*)"");   
    dda_line(100,300,400,450);
    dda_line(300,100,500,450);
    
    getch();  
    closegraph();  
    return 0;
}  

