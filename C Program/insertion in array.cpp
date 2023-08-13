#include<stdio.h>

#define size 5

int main()
{
    int arr[size] = {1, 20, 5, 78, 30};
    int element, pos, i;

    printf("Enter position and element\n");
    scanf("%d%d",&pos,&element);
	
	if(pos <= size && pos >= 0)
    {
        for(i = size; i > pos; i--)
            arr[i] = arr[i-1];

        arr[pos] = element;

        for(i = 0; i <= size; i++)
            printf("%d ", arr[i]);
    }
    else
        printf("Invalid Position\n");

    return 0;
  }
