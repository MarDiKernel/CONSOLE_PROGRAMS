/* Modificado el 13/8/2017
 * v.0.1 [actual]
 * Puede que añada la posicio de los resultados para la próxima revisión
 * junto con el cambio de tipo de datos de INT a FLOAT
 * XD*/

#include <stdio.h>

int main (void)
{
	int n, numero, resultado, option, cifra;
	
	
	printf("\n  -------------------------------------- ");
	printf("\n |  ------  -----  ----   -      -----  |");
	printf("\n | |__  __|| |_| || |_|| | |    | |_| | |");
	printf("\n |   |  |  |  _  ||  --- | |    |  _  | |");
	printf("\n |   |  |  | | | || |_| || |___ | | | | |");
	printf("\n |   |__|  |_| |_||_____||_____||_| |_| |");
	printf("\n  ---------->> DE MULTIPLICAR <<--------\n\n");
	printf("\n ##########################################");
	printf("\n #                   By                   #");
	printf("\n #               MarDiKernel              #");
	printf("\n ##########################################");
	
	printf("\n\nEscribe el número para saber su tabla: ");
	scanf("%d", &numero);
	
	printf("\n¿Hasta que número quieres mostrar?: ");
	scanf("%d", &cifra);
	
	printf("\n\n¿Por qué número quieres que empiece?: ");
	printf("\n\n\t1. Por 1");
	printf("\n\t2. Otro");
	
	printf("\n\nElige un opción(1/2): ");
	scanf("%d", &option);
	
	if (option == 1){
		n=1;
	}
		
	else 
	{
		printf("\nCifra por la que comenzar: ");
		scanf("%d", &n);
	}
	
	while (n<=cifra){
		resultado=n*numero;
		printf("\n\t%d x %d = %d", n, numero, resultado);
		n++;	
	}
	
	fflush(stdin);
	getchar();
	printf("\n\nPulsa Intro para finalizar...\n");
	getchar();
	
	return 0;
}
