/*[Primos.c] [v. 0.6] by MarDiKernel 
  diseñado para sistemas UNIX.
  
  Última modificación 1/6/2018*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int n, nhasta, npri, divisores, raiz, position, option;
  char sn; //Carácter que almacena la respuesta de volver a ejecutar el programa (S/N).
  sn='S'; //Inicialización de la variable para que sea verdadera.
  
  do
  {
	  position=0; // La posición a 0.
	  system("clear"); // Borra la pantalla. (La función "system", pertenece a la biblioteca stdlib.h).
	  
	  /*Ahora procedemos a la introducción del intervalo (cerrado) de números entre los cuales queremos calcular
	  los primos existentes. Los corchetes son como unas comillas, no hay que ponerlos, únicamente indican la forma de los
	  datos a introducir.*/
	  
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
			{
				case 1:
					if (divisores == 1){
						++position;
						printf("\n\tPosición <%6d> -> [%8d]", position, n);
						++n;
					}
					break;
				case 2:
					if (divisores == 1){
						++position;
						printf("\n\tPosición <%6d> -> [%8d]", position, n);
						++n;
					}
					else{
						printf(" %d,", n);
					}
					break;
			}
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
