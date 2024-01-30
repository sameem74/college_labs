#include<stdio.h>
#include<graphics.h>
int main()
{
    int x1,y1,x2,y2,dx,dy,p,pnext,i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
    printf(" Program written by Ritvik Dwivedi ");
    printf("\n Enter the value of Starting Point:\n");
	scanf("%d %d",&x1,&y1);
    printf("Enter the value of End Point:\n");
	scanf("%d%d",&x2,&y2);
    dx=x2-x1;
	dy=y2-y1;
	p=2*dy-dx;
    putpixel(x1,y1,WHITE);
	for(i=0;i<dx;i++)
    { 
    if(p<0)
    {
    	
    }
    else
	{
        x1++;
        pnext=p+2*dy;
        x1++;y1++; 
        pnext=p+2*(dy-dx);
    }
    putpixel(x1,y1,WHITE);
	delay(5000);
    }
    closegraph();
	return 0;
}

