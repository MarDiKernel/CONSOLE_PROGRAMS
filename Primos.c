/* Modificado el 13/7/2017
 * v.0.2 [actual] con posición de las cifras
 + Programa terminado el 07/7/2017
 * v.0.1
 * El tipo de datos es INT, por lo que cuando se usan números de más de
 * 6 cifras puede dar problemas.
 * Este problema lo corregiré para la siguiente versión, cuando sepa 
 * usar bien la funcion FLOAT [que permite hasta 1e37, con 6 decimales]
 * */


#include <stdio.h>

int main (void)
{
	int n, n2, n_hasta, divisores, n_option, numero, posicion;
	
	posicion=0;

	printf("\n########################################################");
	printf("\n#            PROGRAMA PARA SABER LOS NÚMEROS           #");
	printf("\n#   ______  ______   __  __      __  ______  _______   #");
	printf("\n#  |  __  ||  __  | |__||   \\  /   ||  __  ||  ___  |  #");
	printf("\n#  | |__| || |__| |  __ |    \\/    || |  | || |   |_|  #");
	printf("\n#  |  ____||  ____| |  ||  |\\  /|  || |  | || |_____   #");
	printf("\n#  |  |    |     \\  |  ||  | \\/ |  || |  | ||____   |  #");
	printf("\n#  |  |    |  |\\  \\ |  ||  |    |  || |__| | ____|  |  #");
	printf("\n#  |__|    |__| \\__\\|__||__|    |__||______||_______|  #");
	printf("\n <<<<<<<<<<<<<<<<<< By MARCOS S.C. >>>>>>>>>>>>>>>>>>>>");
	
	
	printf("\n\nHasta que número quieres mostrar: ");
	scanf("%d", &n_hasta); //Número tope hasta el que mostrar
	
	/*Da a elegir al usuario si quiere mostrar los números primos
	 *  desde el 1  hasta el número tope que ha definido o quiere que
	 *  se muestren desde algún número en concreto*/
	printf("\n¿Desde donde quieres que comienze?: ");
	printf("\n\n\t1. El 1");
	printf("\n\t2. Otro");
	printf("\n\nElige una opción(1/2): ");
	scanf("%d",&n_option);
	
	if (n_option == 1){  /*Si la opción es "1", se empieza desde 2 ya que 1 es divisor
						universal*/
			n=2;
		}
	if (n_option == 2){ /*Si la opción es "2", se pide el número de inicio y "n" se 
						pone con ese valor*/
		printf("\nNúmero de Inicio [Mayor que 1]: ");
		scanf("%d", &numero);
		n=numero;
		}
	
	while (n_hasta>=n) //Mientras "n" sea menor o igual que el número tope
	{
		if (n == 2){ //Si "n" es 2 se muestra, ya que es el único número par primo
			printf("\n\tPosición < %d > Nº --> [ %d ]", posicion, n);
			}
		if (n%2 == 0){ //Si el resto de n/2 es 0 se suma 1 a "n" para que sea impar
			n++;
		}
		if (n%2 !=0){ /*Si el resto de n/2 no es 0, el número es impar y nos quitamos
						los pares*/
			divisores=0; //Número de veces que el resto da 0
			for (n2=1; n2<=n; n2++) //"n2" es todos los número menores que "n" que lo dividen
			{
				if (n%n2 == 0){ /*Si el resto de n/n2 es 0, se suma 1 
								a la variable "divisores"*/
					divisores++;
					}
			}
		if (divisores == 2){ //Si "n" solo tiene 2 divisores (1 y "n"), es primo
			posicion++;
			printf("\n\tPosición < %d > Nº --> [ %d ]", posicion, n);
			}
			n++; /*Se suma 2 a "n", para que el próximo número con el que se
				 pruebe siga siendo impar*/ 
			n++;
		}
	}
	
	fflush(stdin); //Limpiamos memoria
	getchar();
	printf("\n\nPulsa Intro para finalizar...\n");
	getchar();
	
	return 0;
}
