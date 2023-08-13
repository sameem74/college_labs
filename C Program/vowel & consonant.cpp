#include<stdio.h>
int main()
{
	char ch;
	printf("\nenter an alphabet");
	scanf("%c",&ch);
	if ( ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
	{
		printf("\n%c is vowel");
	}
	else{
		printf("\n%c is consonant");
	}
	return(0);
}
