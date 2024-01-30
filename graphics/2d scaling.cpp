#include<stdio.h>
#include<graphics.h>
int main(){
int x,y,x1,y1,x2,y2;
int scl_fctr_x,scl_fctr_y; int gd=DETECT,gm;
initgraph(&gd,&gm,"");
printf(" Program written by Ritvik Dwivedi \n");
printf("\nPlease enter first coordinate of Triangle = ");
scanf("%d %d",&x,&y);
printf("\nPlease enter second coordinate of Triangle = ");
scanf("%d %d",&x1,&y1);
printf("\nPlease enter third coordinate of Triangle = ");
scanf("%d %d",&x2,&y2);
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
printf("\nNow Enter Scaling factor x and y = ");
scanf("%d %d",&scl_fctr_x,&scl_fctr_y);
x = x* scl_fctr_x; x1 
= x1* scl_fctr_x;x2 = 
x2* scl_fctr_x;y = y*
scl_fctr_y; y1 = y1*
scl_fctr_y;
y2= y2 * scl_fctr_y ;
line(x,y,x1,y1);
line(x1,y1,x2,y2);
line(x2,y2,x,y);
delay(5000);
closegraph(); 
return 0;
}

