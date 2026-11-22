#include<stdio.h>
int main()
{
  float score[7];
  for(int i=0;i<7;i++)
    {
      printf("Judge %d score:",i+1);
      scanf("%f",&score[i]);
    }
  float sum=0;
  float high=score[0];
  float low=score[0];

  for(int i=0;i<7;i++)
    {
      sum=sum+score[i];
      if(score[i]>high)
      {
        high=score[i];
      }
      if(score[i]<low)
      {
        low=score[i];
      }
    }
  float final;
  final=(sum-high-low)/5;
  printf("\nHighest score dropped: %.2f\n",high);
  printf("Lowest score dropped: %.2f\n",low);
  printf("Final score: %.2f\n",final);
  int found=0;
  for(int i=0;i<7;i++)
    {
      if(score[i]==10.00)
      {
        printf("Judge %d gave a perfect 10!\n", i+1);
        found=1;
        break;
        
      }
      
    }
  if(found==0)
  {
    printf("No judge gave a perfect 10.\n");
  }
  
  return 0;
}