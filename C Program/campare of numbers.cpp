#include<stdio.h>
main()
{
	int a,b,c,r;
	printf("enter the numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if ((a-b>0) && (a-c>0))
	{
	  r=a;
	  printf("largest is %d",r);
    }
	else if ((b-a>0) && (b-c>0))
	{
	  r=b;
	  printf("largest is %d",r);
    }
	else
	{
	  r=c;
	  printf("largest is %d",r);
	}
	return 0;
}
