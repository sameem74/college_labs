#include<stdio.h>
main()
{
	int a,b,c,g,s,y;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("sum is %d",c);
	scanf("%d%d",&a,&b);
	g=a-b;
	printf("difference is %d",g);
	scanf("%d%d",&a,&b);
	s=a*b;
	printf("product is %d",s);
	scanf("%d%d",&a,&b);
	y=a/b;
	printf("quotient is %d",y);
}
