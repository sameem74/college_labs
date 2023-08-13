#include <stdio.h>
#define M 100
int main()
{
    int n,i,j,temp,AT[M],CT[M],BT[M],WT[M],TAT[M],PID[M];
    double avg_TAT,avg_WT,throughput;
    printf("Enter the  total No.of Process: ");
    scanf("%d",&n);
    if(n>M)
    {
        printf("Please Enter the Smaller No.");
    }
        else if(n<1)
        {
            printf("This No. of process isn't exist or Negative No.");
        }
        else
{
    
    for(i=0;i< n;i++)
    {
            printf("Enter the detail of the process P%d\n",i+1);
            printf("Arrival Time: ");
            scanf("%d",&AT[i]);
            printf("Burst Time: ");
            scanf("%d",&BT[i]);
            PID[i]=i+1;
    }
}
          
    for(i=0;i< n-1;i++)
    {
        for(j=0;j< n-i-1;j++)
        {
            if(AT[j]>AT[j+1])
            {
                
                temp=AT[j+1];
                AT[j+1]=AT[j];
                AT[j]=temp;
                
                temp=BT[j+1];
                BT[j+1]=BT[j];
                BT[j]=temp;
                
                temp=PID[j+1];
                PID[j+1]=PID[j];
                PID[j]=temp;
            }
        }
    }

             
             printf("\nProcess\tArrivalTime\tBurstTime\tCompletionTime\tTurnAroundTime\tWaitingTime\n");
              CT[0]=AT[0]+BT[0];
              TAT[0]=CT[0]-AT[0];
              WT[0]=TAT[0]-BT[0];
              printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",PID[0],AT[0],BT[0],CT[0],TAT[0],WT[0]);
              avg_TAT=TAT[0];
              avg_WT=WT[0];
               for(i=1;i< n;i++)
              {
                CT[i]=CT[i-1]+BT[i];
                TAT[i]=CT[i]-AT[i];
                WT[i]=TAT[i]-BT[i];
                avg_TAT= avg_TAT+TAT[i];
                avg_WT= avg_WT+WT[i];
                printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,AT[i],BT[i],CT[i],TAT[i],WT[i]);
                
              }
              avg_TAT=(double)avg_TAT/n;
              avg_WT=(double)avg_WT/n;
              throughput=(double)n/(CT[n-1]-AT[0]);
              printf("\nAvg_TAT=%.2f",avg_TAT);
              printf("\nAvg_WT=%.2f",avg_WT);
              printf("\nThroughput=%.2f",throughput);
    return 1;
}
