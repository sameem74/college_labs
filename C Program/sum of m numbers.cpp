#include<stdio.h>
#include<math.h>
main()
{
	int m,i,sum=0;
	printf("Enter a Number\n");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
	return(0);
}
