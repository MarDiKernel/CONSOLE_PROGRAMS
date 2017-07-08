#include <stdio.h>

int main (void)
{
  int n, n2, n_hasta, divisores, n_option, numero;
  printf("\n\nHasta que número quieres mostrar: ");
  scanf("%d", &n_hasta);
  
  printf("\n¿Desde donde quieres que comienze?: ");
  printf("\n\n\t1. El 1");
  printf("\n\t2. Otro");
  printf("\n\nElige una opción(1/2): ");
  scanf("%d", &n_option);
  
  if (n_option == 1){
    n=2;
  }
  if (n_option == 2){
    printf("\nNúmero de Inicio [Mayor que 1]: ");
    scanf("%d", &numero);
    n=numero;
  }
  
  while (n_hasta>=n)
  {
    if (n == 2){
      printf("\n\t%d", n);
    }
    if (n%2 == 0){
      n++;
    }
    if (n%2 !=0){
      divisores=0;
      for (n2=1; n2<=n; n2++)
      {
        if (n%n2 == 0){
          divisores++;  
        }
      }
    if (divisores == 2){
      printf("\n\t%d", n);
    }
    n++;
    n++;
    }
  }
}
