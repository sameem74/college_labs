#include<stdio.h>
#include<graphics.h>
int tx,ty,x[10],y[10],i,n;
void draw()
{
for(i=0;i<n; i++){
line(x[i],y[i],x[(i+1)%n],y[(i+1)%n]);
}
}
void translate()
{
for(i=0;i<n;i++){
x[i]+=tx;
y[i]+=ty;
}
}
int main()
{
int gd=DETECT,gm;
printf("Program written by Ritvik Dwivedi \n");
printf("Enter the No.of Co-ordinates:");
scanf("%d",&n);
printf("Enter the Co-ordinates:");
for(i=0;i<n; i++){
scanf("%d %d",&x[i],&y[i]);
}
printf("Enter the Translation(in x and y directions:");
scanf("%d %d",&tx,&ty);
initgraph(&gd,&gm," ");
setcolor(RED);
draw();
translate();
setcolor(YELLOW);
draw();
delay(5000);
closegraph();
return 0;
}

