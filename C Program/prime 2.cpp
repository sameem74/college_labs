#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("enter a range\n");
	scanf("%d%d",&n,&m);
	for(j=n;j<=m-1; j++)
	{
		for(i=2;i<=j-1; i++)
		{
			if(j%i==0)
			{
				break;
			}
		}
		if(i==j)
		printf("%d\n",j);
	}
}
