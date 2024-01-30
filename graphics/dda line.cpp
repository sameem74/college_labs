#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2,dx,dy,steps,i;
    float xinc,yinc,x,y;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    printf(" Program written by Ritvik Dwivedi \n");
    printf("\n Enter the Value of Starting Point:\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the Value of EndPoint:\n");
	scanf("%d%d",&x2,&y2);
    dx=x2-x1;dy=y2-y1;
    if(abs(dx)>abs(dy))steps=abs(dx);
    else steps=abs(dy);
    xinc=(float)dx/steps;
	yinc=(float)dy/steps;
	x=x1;
    y=y1;
	for(i=0;i<steps;i++){
       putpixel(x,y,WHITE);
       x+=xinc;
	   y+=yinc;
    }
    delay(5000);
	closegraph();
}


