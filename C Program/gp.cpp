#include<stdio.h>
#include<math.h>
main ()
{
	int a,r,n,l,s;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the common ratio\n");
	scanf("%d",&r);
	printf("enter the number of terms\n");
	scanf("%d",&n);
	l = (a*(pow(r,n-1)));
	printf("last term is %d\n",l);
	s = (a*(1-pow(r,n)))/(1- r);
	printf("sum is %d\n",s);
	return 0;
}
