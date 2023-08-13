#include <stdio.h>

#define max 100
int main()
{
  int i,j,k,no_of_pages,ref_str[max],no_of_frames,frame[max],avail,count=0;
  printf("\nEnter the total no of pages: ");
  scanf("%d",&no_of_pages);
  printf("\nEnter the Page No. OR Ref String: ");
  for(i=0;i< no_of_pages;i++)
  {
    scanf("%d",&ref_str[i]);
  }
  printf("\n Enter the total no. of frames: ");
  scanf("%d",&no_of_frames);
  for(i=0;i< no_of_frames;i++)
  {
    frame[i]=-1;  
  }
  j=0;
  printf("\tRef String\tFrames\n");
  for(i=0;i< no_of_pages;i++)
  {
    printf("%d\t\t",ref_str[i]);
    avail=0;
    for(k=0;k< no_of_frames;k++)
    {
      if(frame[k]==ref_str[i])    
      avail=1;
    }
    if(avail==0)
    {
      
      
      frame[j]=ref_str[i];
      j=(j+1)%no_of_frames; 
      count++;
      for(k=0;k< no_of_frames;k++)
      printf("%d\t",frame[k]);
    
    }
    printf("\n");
  }
  printf("Page Fault is %d",count);
  return 0;
}      

