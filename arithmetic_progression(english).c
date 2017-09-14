#include <stdio.h>

int main (void)
{
  int a1, d, n, answer, n_end;
  
  printf("\nStart number: ");
  scanf("%d", &a1);
  fflush(stdin);
  
  printf("\nDiference: ");
  scanf("%d", &d);
  fflush(stdin);
  
  printf("\n\n\t1. Interval of positions\n\t2. Especific position\n");
  printf("\n\tChoose a option(1/2): ");
  scanf("%d", &answer);
  fflush(stdin);
  
  if (answer == 1){
    printf("\nFirst position: ");
    scanf("%d", &n);
    fflush(stdin);
    
    printf("\nLast position: ");
    scanf("%d", &n_end);
    fflush(stdin);
    
    for (n=n; n<=n_end; n++)
    {
      printf("\n\t%d", a1+d*(n-1));
    }
  }
  if (answer == 2){
    printf("\nPosition to show: ");
    scanf("%d", &n);
    fflush(stdin);
    
    printf("\n\t%d", a1+d*(n-1));
  }
  printf("\n\n");
  
  return 0;
}
