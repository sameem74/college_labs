#include<stdio.h>
#include<math.h>
main()
{
	int a,n,d,l,s;
	printf("enter the first term\n");
	scanf("%d",&a);
	printf("enter the common differece\n");
	scanf("%d",&d);
	printf("enter the number of terms\n");
	scanf("%d",&n);
	l=a+(n-1)*d;
	printf("last term is %d\n",l);
	s=n/2*(2*a+(n-1)*d);
	printf("sum is %d\n",s);
	return 0;
}
