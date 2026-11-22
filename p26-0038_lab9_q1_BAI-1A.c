#include<stdio.h>
int main()
{
    int runs[6];
    for(int i=0; i<6;i++)
        {
            printf("Runs in over %d:",i+1);
            scanf("%d",&runs[i]);
        }
    int total=0;
    for(int i=0; i<6;i++)
        {
            total=total+runs[i];
        }
    printf("\n\nTotal runs: %d\n",total);
    float r_rate;
    r_rate=(float)total/6;
    printf("Run rate: %.2f per over\n",r_rate);
    int best=0;
    for(int i=1; i<6;i++)
        {
            if(runs[i]>runs[best])
            {
           
            best=i;}
        }
    printf("Best over: Over %d with %d runs\n",best+1, runs[best]);
    int need;
    if(total>=60)
    {
       printf("Reached 60 runs and won the match.");
    }
    else
    {     
   need=60-total;
        printf("Needed %d more runs to reach 60. ",need);
    }   
    return 0;
}