#include<stdio.h>
main()
{
	int a[10][10],b[10][10],s[10][10],p[10][10],r,c,i,j,k;
	printf("enter the number of rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of 1st matrix:\n");
	for (i=0;i<r;i++)
	for(j=0;j<c;j++){
		printf("enter elements a%d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	printf("enter the elements of 2nd matrix:\n");
	for (i=0;i<r;i++)
	for (j=0;j<c;j++){
		printf("enter elements b%d%d:",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
	for (i=0;i<r;i++)
	for (j=0;j<c;j++){
		s[i][j]=a[i][j]+b[i][j];
	}
	printf("sum of the matrices:\n");
	for (i=0;i<r;i++)
	for (j=0;j<c;j++){
		printf("%d\t",s[i][j]);
		if (j==c-1)
		printf("\n\n");
	}
	
	printf("multiply of the matrix=\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            p[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
                p[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }       
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            printf("%d\t",p[i][j]);    
        }    
        printf("\n");    
    }    
    return 0;     
}
