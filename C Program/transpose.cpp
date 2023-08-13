#include <stdio.h>
int main()
 {
  int a[10][10],t[10][10],r,c;
  printf("Enter rows and columns:\n");
  scanf("%d %d", &r, &c);
  printf("\nEnter matrix elements:\n");
  for (int i=0;i<r;++i)
  for (int j=0;j<c;++j) {
    printf("Enter element a%d%d:",i+1,j+1);
    scanf("%d",&a[i][j]);
  }
  printf("\nEntered matrix:\n");
  for (int i=0;i<r;++i)
  for (int j=0;j<c;++j){
    printf("%d\t",a[i][j]);
    if (j==c-1)
    printf("\n");
   }
  for (int i=0;i<r;++i)
  for (int j=0;j<c;++j){
    t[j][i] = a[i][j];
  }
  printf("\nTranspose of the matrix:\n");
  for (int i=0;i<c;++i)
  for (int j=0;j<r;++j){
    printf("%d\t",t[i][j]);
    if (j==r-1)
    printf("\n");
  }
  return 0;
}
