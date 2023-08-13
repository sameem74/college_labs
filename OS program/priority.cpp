#include <stdio.h>
#define max 100

int main(){
  int n,AT[max],WT[max],BT[max],TAT[max],CT[max],PID[max],Priority[max],RT[max],min,maxCT=0,i,count,j,temp;
  double avg_WT,avg_TAT,thrpt;
  
  printf("Please enter number of processes\n");
  scanf("%d",&n);
  if(n>max){
    printf("Limit exceeded");
  }
  else if(n<1){
    printf("No process exist or negative input.");
  }
  else{
    for(i=0;i< n;i++){
      printf("\nEnter details for process %d:\n",i+1);
      printf("Arrival Time:");
      scanf("%d",&AT[i]);
      printf("Execution Time:");
      scanf("%d",&BT[i]);
      PID[i]=i+1;
      printf("Priority:");
      scanf("%d",&Priority[i]);
    }
    for(i=0;i< n-1;i++){
      min=i;
      for(j=i+1;j< n;j++){
        if(AT[j]< AT[min]){
          min=j;
        }
      }
      temp=AT[i];
      AT[i]=AT[min];
      AT[min]=temp;

      temp=BT[i];
      BT[i]=BT[min];
      BT[min]=temp;

      temp=PID[i];
      PID[i]=PID[min];
      PID[min]=temp;
      
      temp=Priority[i];
      Priority[i]=Priority[min];
      Priority[min]=temp;
    }
    for(i=0;i< n;i++){
      RT[i]=BT[i];
    }
    RT[n]=9999;
    
    printf("Process\tPriority\tArrival Time\tBurst Time\tCompletion Time\tTAT\tWaiting Time\n");
    count=0;
    for(i=AT[0];count!=n;i++){
      min=n;
      for(j=0;j< n;j++){
        if(AT[j]<=i && RT[j]>0 && Priority[j]>Priority[min]){
          min=j;
        }
      }
      RT[min]--;
      if(RT[min]==0){
        count++;
        temp=i+1;
        CT[min]=temp;
        TAT[min]=CT[min]-AT[min];
        WT[min]=TAT[min]-BT[min];
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t%d\n",PID[min],Priority[min],AT[min],BT[min],CT[min],TAT[min],WT[min]);
        if(temp>maxCT){
          maxCT=temp;
        }
        avg_TAT=avg_TAT+TAT[min];
        avg_WT=avg_WT+WT[min];
      }
    }
    avg_TAT=(double)avg_TAT/n;
    avg_WT=(double)avg_WT/n;
    thrpt=(double)n/(maxCT-AT[0]);
    printf("\nAvg.TAT=%.2f\n",avg_TAT);
    printf("Avg.WT=%.2f\n",avg_WT);
    printf("Throughput=%.2f",thrpt);
  }
  return 0;
}

