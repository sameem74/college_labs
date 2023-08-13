#include <stdio.h>
#define max 100
int main()
{
    int NoP,NoR,i,j,flag,count;
    int SS[max],PC[max],tot_res[max],rem_tot_res[max],alloc_res[max][max],rem_need[max][max],max_need[max][max];
    
    printf("Please enter no. of processes: \n ");
    scanf("%d",&NoP);
    printf("Please enter no. of resources: \n");
    scanf("%d",&NoR);
    printf("\n");
    if(NoP>max || NoR>max)
    {
        printf("Limit exceeded");
    }
    else if(NoP<1 || NoR<1){
        printf("Not sufficient process or resource");
    }
    else
    {
        for(i=0;i< NoR; i++)
        {
            printf("Please enter the max no. of instances of resources %d: ",i+1);
            scanf("%d",&tot_res[i]);
            rem_tot_res[i]=tot_res[i];
        }
        for(i=0;i< NoP ; i++)
        {
            printf("Please enter the deatils for process %d: \n",i+1);
            PC[i]=0;
            for(j=0;j< NoR; j++){
                printf("\nInstances of Resources %d allocated: ",j+1);
                scanf("%d",&alloc_res[i][j]);
                printf("\n max need of instances of resources %d required: ",j+1);
                scanf("%d",&max_need[i][j]);
                rem_tot_res[j]-=alloc_res[i][j];
                rem_need[i][j]=max_need[i][j]-alloc_res[i][j];
            }
        }
    
        printf("\n");
        count=0;
        while(count< NoP)
        {
            for(i=0;i< NoP; i++)
            {
                flag=0;
                if(PC[i]==0)
                {
                    for(j=0;j< NoR; j++)
                    {
                        if(rem_tot_res[j]< rem_need[i][j])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0)
                    {
                        SS[count]=i;
                        count++;
                        PC[i]=1;
                        for(j=0;j< NoR; j++)
                        {
                            rem_need[i][j]=0;
                            rem_tot_res[j]+=alloc_res[i][j];
                            alloc_res[i][j]=0;
                        }
                    }
                }
            }
        }
        printf("Safe Sequence: ");
        for(i=0;i< NoP; i++)
            {
                printf("P%d\t",SS[i]);
        }
    }
    return 0;
}
