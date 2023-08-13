#include<stdio.h>
#include<math.h>
#define pi 3.141
int main()
{
	float r,p,a;
	printf("\nradius of circle");
	scanf("%f",&r);
	p= 2*pi*r;
	printf("\ncircumference is %f",p);
	scanf("%f",&r);
	a=pi*r*r;
	printf("\narea is %f",a);
	return (0);
}
