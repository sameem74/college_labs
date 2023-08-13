#include<stdio.h>
#include<math.h>
 main()
{
	float c,x;
	printf("enter temperature in centigrade");
	scanf("%f",&c);
	x=((c/5)*9)+32;
	printf("temperature in fahrenheit is %f",x);
	return (0);
}
