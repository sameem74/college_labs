#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,c;
	printf("enter p,r,t\n");
	scanf("%f%f%f",&p,&r,&t);
	s=(p*r*t)/100;
	printf("simple interest is %f\n",s);
	scanf("%f,%f,%f",&p,&r,&t);
	c= p*(pow((1+r/100),t)) - p;
	printf("compound interest is %f\n",c);
	return (0);	
}
