// Write C++ program to draw a concave polygon and fill it with desired color using scan fill 
// algorithm. Apply the concept of inheritance.

#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class polygon
{
	public:
		int x[10],y[10];
		int min_y,max_y,y_val;
		int n,i;
		int cnt;
		float m[20],xint[200];
		void draw_poly();
		void scanline();
		void sort(float[],int);
	
		
};
void polygon::draw_poly()
{
	cout<<"\nEnter no of vertices : ";
	cin>>n;
	if(n<3)
	{
		cout<<"\nError";
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		{   cout<<"x : ";
			cin>>x[i];
			cout<<"y : ";
			cin>>y[i];
		}
		x[n]=x[0];
		y[n]=y[0];
		for(i=0;i<n;i++)
		{
			line(x[i],y[i],x[i+1],y[i+1]);
		}
	}
	getch();
}
void polygon::scanline()
{
	draw_poly();
	setcolor(BLUE);
	min_y=480;
	max_y=0;
	for(i=0;i<n;i++)
	{
		if(min_y >= y[i])
			min_y=y[i];
		
		if(y[i]>= max_y)
			max_y=y[i];
		
		int dx=x[i+1]-x[i];
		int dy=y[i+1]-y[i];
		if(dx==0)
		{
			m[i]=0;
		}
		else if(dy==0)
		{
			m[i]=1;
		}
		else
		{
			m[i]=(dy/dx);
		}
	
	}
	
	for(y_val=max_y;y_val>=min_y;y_val--)
	{
		cnt=0;
		for(i=0;i<n;i++)
		{
			if((y[i]>y_val && y[i+1]<=y_val) || (y[i]<=y_val && y[i+1]>y_val))
			{
				
			    xint[cnt]=x[i]+((y_val-y[i])*m[i]);
				cnt++;
			}
		}
		sort(xint,cnt);

		for(int k=0;k<cnt-1;k=k+2)
		{
			line(xint[k],y_val,xint[k+1],y_val);
			delay(50);
		}
	}
}
void polygon::sort(float xint[],int cnt)
{
	float temp;
	for(int i=0;i<cnt;i++)
	{
		for(int j=0;j<cnt-1;j++)
		{
			if(xint[i] > xint[j])
			{
				temp=xint[j];
				xint[j]=xint[j+1];
				xint[j+1]=temp;
			}
		}
	}
}
int main()
{
	int gd,gm;
	gd=DETECT;
	initgraph(&gd,&gm,(char*)"");
	
	polygon p;
    p.scanline();
	
	getch();
	closegraph();
	return 0;
}