#include <stdio.h>

int main (void)
{
  int a1, d, n, repuesta, n_final;
  
  printf("\nNúmero de inicio: ");
  scanf("%d", &a1);
  fflush(stdin);
  
  printf("\nDiferencia: ");
  scanf("%d", &d);
  fflush(stdin);
  
  printf("\n\n\t1. Intervalo de posiciones\n\t2. Posicin concreta\n");
  printf("\n\tElige una opción(1/2): ");
  scanf("%d", &respuesta);
  fflush(stdin);
  
  if (respuesta == 1){
    printf("\nPrimera posicin: ");
    scanf("%d", &n);
    fflush(stdin);
    
    printf("\nÚltima posición: ");
    scanf("%d", &n_final);
    fflush(stdin);
    
    for (n=n; n<=n_final; n++)
    {
      printf("\n\t%d", a1+d*(n-1));
    }
  }
  if (respuest == 2){
    printf("\nPosición a mostrar: ");
    scanf("%d", &n);
    fflush(stdin);
    
    printf("\n\t%d", a1+d*(n-1));
  }
  printf("\n\n");
  
  return 0;
}
