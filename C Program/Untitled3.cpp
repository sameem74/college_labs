#include<stdio.h>
#include<math.h>
int main() {
	float a,r,l,s;
	int n;
	float sum=0;
	printf("Enter the first term\n");
	scanf("%f",&a);
	printf("Enter the number of terms\n");
	scanf("%d",&n);
	printf("Enter the common ratio\n");
	scanf("%f",&r);
	s = (a*(pow(r,n) -1))/(r-1);
	l = a*(pow(r,n-1));
	printf("last term is %f",l);
	printf("\nSum is %f",s);
	return 0;
}
