#include<stdio.h>
int main()
{
    int i,a[50],num,size;
    printf("Enter Size of array: ");
    scanf("%d",&size);
    printf("Enter %d element in array: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element for search: ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(a[i]==num) 
        {
            printf("\n%d is present at %d position",num,i+1);
            break;
        }
    }
    if(i==size)
    {
        printf("\n %d is not found",num);
    }
    return 0;
}
