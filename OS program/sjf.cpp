#include <stdio.h>
#define max 20
int main()
{
  int i,j,k=0,l,time=1,at[max],bt[max],ct[max],wt[max],tat[max],n,pn[max]={1,2,3,4,5,6,7,8},temp;
  float avgwt=0,avgtat=0,tatsum=0,wtsum=0,throughput=0;
  printf("enter the number of process\n");
  scanf("%d",&n);
  printf("enter the arrival time and burst time of the processes respectively\n");
  for(i=0;i< n;i++)
  {
    printf("enter for the process P%d\n",pn[i]);
    scanf("%d",&at[i]);
    scanf("%d",&bt[i]);
  }
  
  for(i=0;i< n-1;i++)
  {
    for(j=0;j<((n-1)-i);j++)
    {
      if(at[j]>at[j+1])
      {
        temp=pn[j];
        pn[j]=pn[j+1];
        pn[j+1]=temp;
        temp=at[j];
        at[j]=at[j+1];
        at[j+1]=temp;
        temp=bt[j];
        bt[j]=bt[j+1];
        bt[j+1]=temp;
      }
    }
  }
  
  ct[0]=at[0]+bt[0];
  wt[0]=0;
  tat[0]=ct[0]-at[0];
  for(l=0;l< n-1;l++)
  {
    for(j=time;j< n;j++)
    {
    
    if(ct[l]>=at[j])
    {
   
      k++;
      }
     }
      
   for(i=time;i< k;i++)
  {
    for(j=time;j<=k-i;j++)
    {
      if(bt[j]>bt[j+1])
      {
        temp=pn[j];
        pn[j]=pn[j+1];
        pn[j+1]=temp;
        temp=at[j];
        at[j]=at[j+1];
        at[j+1]=temp;
        temp=bt[j];
        bt[j]=bt[j+1];
        bt[j+1]=temp;
      }
    }
  }
  time++;
  k=0;
  if((ct[l]-at[l+1])<0)
  ct[l+1]=(ct[l]+bt[l+1])+(at[l+1]-ct[l]);
  else
  ct[l+1]=ct[l]+bt[l+1];
  }
  for(i=1;i< n;i++)
  {
    tat[i]=ct[i]-at[i];
  wt[i]=tat[i]-bt[i];
  }
  for(i=0;i< n;i++)
  {
    tatsum=tatsum+tat[i];
    wtsum=wtsum+wt[i];
  }
  avgtat=(tatsum/n);
  avgwt=(wtsum/n);
  throughput=n/(ct[n-1]-at[0]);
  printf("process\tAT\tBT\tCT\tTAT\tWT\n");
  for(i=0;i< n;i++)
  {
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",pn[i],at[i],bt[i],ct[i],tat[i],wt[i]);
  }
  printf("average turn around time=%.2f\n",avgtat);
    printf("average waiting time =%.2f\n",avgwt);
    printf("Throughput=%.2f",throughput);
}

