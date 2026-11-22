#include<stdio.h>
int main()
{
  int ticket[7];
  int genuine=7;
  int forged=0;
  for(int i=0;i<7;i++)
    {
      printf("Ticket of person %d: ",i+1);
      scanf("%d",&ticket[i]);
    }
  printf("\n--- GATE REPORT ---\n");
  for(int i=0;i<7;i++)
    {
      for(int j=0;j<i;j++)
        {
          if(ticket[i]==ticket[j])
          {
            printf("FORGED: person %d used ticket %d, already used by person %d\n",i+1, ticket[i], j+1);
            forged++;
            genuine--;
            break;
          }
        }
    }
  printf("\nGenuine: %d, Forged: %d\n",genuine, forged);

  
  return 0;
}