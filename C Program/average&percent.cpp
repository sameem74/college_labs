#include<stdio.h>
int main()
{
	int j,b,c,e,g;
	float s,a,p;
	printf("\nenter marks in five subjects");
	scanf("%d%d%d%d%d",&j,&b,&c,&e,&g);
	s=j+b+c+e+g;
	a=s/5;
	p=(s/500)*100;
	printf("\nsum is %f",s);
	printf("\naverageis %f",a);
	printf("\npercentage is %f",p);
	return (0);
}
