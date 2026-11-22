#include<stdio.h>
int main()
{
  int lockers[10];
  int empty=0;
  int search;
  int found=0;

  printf("Enter item code in each locker(0=empty):\n");
  for(int i=0;i<10;i++)
    {
      printf("Locker %d:", i+1);
      scanf("%d", &lockers[i]);

      if(lockers[i]==0)
      {
        empty++;
      }
    }
  printf("Enter the item code to search: ");
  scanf("%d", &search);

  for(int i=0;i<10;i++)
    {
      if(lockers[i]==search)
      {
        printf("Item %d is in locker %d\n", search, i+1);
        found++;
      }
    }

  if(found==0)
    {
      printf("Item %d is not found in any locker.\n", search);
    }
  else
  {
    printf("Total lockers with this item: %d\n", found);
  }
  printf("Empty lockers: %d\n", empty);

  return 0;
  
}