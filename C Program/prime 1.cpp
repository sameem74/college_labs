#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number to check if it is prime\n");
	scanf("%d",&n);
	for(i=2; i<=n-1; i++)
    {
    	if(n%i==0)
    	{
    		printf("%d is not prime.\n", n);
    	break;
		}
	}
	if(i==n)
	printf("%d is prime.\n", n);
	return(0);
}
