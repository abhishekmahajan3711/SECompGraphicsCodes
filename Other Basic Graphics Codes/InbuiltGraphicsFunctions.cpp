#include<graphics.h>
#include<conio.h>
int main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, (char*)"");

   setfillstyle(XHATCH_FILL, RED);
   circle(100, 100, 50);
   floodfill(100, 100, WHITE);

   getch();
   closegraph();
   return 0;
}