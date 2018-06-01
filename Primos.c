#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int n, nhasta, npri, divisores, raiz, position, option;
  char sn;
  sn='S';
  
  do
  {
	  position=0;
	  system("clear");
	  
	  printf("\n\tIntervalo de números primos a mostrar[n1 - n2]: ");
	  scanf("%d - %d", &n, &nhasta);
	  fflush(stdin);
	  printf("\n\n\t1. Mostrar solo los números primos.\n\t2. Mostrar todos los números.\n");
	  printf("\nElige una opción(1/2): ");
	  scanf("%d", &option);
	  fflush(stdin);
	  
	  if ((n%2 !=0)||(n==2)){
	  	for (((divisores=0)&&(raiz=sqrt(n))); n<=nhasta; ++n)
	  	{
	  		for(npri=1; ((divisores<2)&&(npri<=raiz)); ++npri)
			{
				if (n%npri == 0)
					++divisores;
			}
			switch (option)
	  	}
	  }
	  else{
	  	++n;
	  }
		  
		  
	  printf("\n\n¿Calcular otro intervalo?(S/N): ");
	  sn=getchar();
	  
  }while ((sn == 'S')||(sn == 's'));
  
  printf("\n\nPulsa Intro para finalizar...\n");
  getchar();
  
  return 0;
}
