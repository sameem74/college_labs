#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(x*x*x-4*x-9);
}
void bisect(float *x,float a,float b,int *itr)
{
	*x=(a+b)/2;
	++(*itr);
	printf("iteration no.%3d x=%7.5\n",*itr,*x);
}
main()
{
	int itr=0,maxitr;
	float x,a,b,aerr,x1;
	printf("enter the values of a,b,""allowed order,maximum iterations\n");
	scanf("%f,%f,%f,%d",&a,&b,&aerr,&maxitr);
	bisect(&x,a,b,&itr);
	do
	{
		if (f(a)*f(x)<0)
		b=x;
		else
		a=x;
		bisect(&x1,a,b,&itr);
		if(fabs(x1-x)< aerr)
		{
			printf("after %d iterations,root <169>=%6.4f\n",itr,x1);
			return 0;
		}
		x=x1;
	}
	while (itr<maxitr);
	printf("solution does not converge,""iterations not sufficient");
	return 1;
}
