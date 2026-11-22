#include<stdio.h>
int main()
{
  printf("Enter guard ID for Day 1 to Day 7:\n");
  int guard[7];
  int newRoster[7];
  for(int i=0;i<7;i++)
    {
      printf("Day %d: ",i+1);
      scanf("%d",&guard[i]);
      
    }
  int k;
  printf("Shift roster forward by how many days (1-6)? ");
  scanf("%d",&k);
  for(int i=0;i<7;i++)
    {
      newRoster[(i+k)%7]=guard[i];
    }
  printf("\nDay\tOld\tNew\n");
  for(int i=0;i<7;i++)
    {
      printf("Day %d\t%d\t%d\n",i+1,guard[i],newRoster[i]);
    }
  int search;
  int found=0;
  printf("\nEnter your guard ID: ");
  scanf("%d",&search);
  for(int i=0;i<7;i++)
    {
      if(newRoster[i]==search)
      {
        printf("Guard %d now has duty on Day %d.\n",search,i+1);
        found=1;
        break;
      }
    }
  if(found==0)
  {
    printf("Guard ID not found.\n");
  }
  return 0;
}