#include<stdio.h>
#include<math.h>
main()
{
	int a,n,r,l,s;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the number of terms\n");
	scanf("%d",&n);
	printf("enter the common ratio\n");
	scanf("%d",&r);
	l=(a*(pow(r,n-1)));
	printf("last term is %d\n",l);
	while (r>1);
	s=(a*(pow(r,n)-1))/(r-1);
	printf("sum is %d\n",s);
	while (r<1);
	s=(a*(1-pow(r,n)))/(1-r);
	printf("sum is %d\n",s);
	return 0;
}
