#include<stdio.h>
#include<graphics.h>
int main()
{
   int x,y,xc,yc,r,d;
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"");
   printf(" Program written by Ritvik Dwivedi	\n");
   printf("\n Enter the Value of Centre:\n");
   scanf("%d  %d",&xc,&yc);
   printf("\n Enter the Radius of Circle:\n");
   scanf("%d",&r);
   d=3-2*r;
   x=0;
   y=r;
   while(x<=y)
   {
       putpixel(x+xc,y+yc,WHITE);
	   putpixel(x+xc,-y+yc,WHITE);
	   putpixel(-x+xc,-y+yc,WHITE);
	   putpixel(-x+xc,y+yc,WHITE);
	   putpixel(y+xc,x+yc,WHITE);
	   putpixel(y+xc,-x+yc,WHITE);
	   putpixel(-y+xc,-x+yc,WHITE);
	   putpixel(-y+xc,x+yc,WHITE);
	   if(d<=0)
       {

       }
       else
	   {

       }
    } 
    x++;
    d=d+4*x+6;
    x++;
	y--;
    d=d+4*(x-y)+10; 
    delay(5000); 
	closegraph();
	return 0;
}

