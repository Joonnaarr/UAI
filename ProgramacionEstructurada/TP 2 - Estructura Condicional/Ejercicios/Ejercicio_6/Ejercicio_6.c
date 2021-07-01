#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos, numeroTres, numeroMayor, promedio;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &numeroTres);
	
	promedio = (numeroUno + numeroDos + numeroTres) / 3;
	printf("El el promedio es: %d \n", promedio);

	if (numeroUno > numeroDos && numeroUno > numeroTres)
		{
		printf("El numero %d es mayor a todos", numeroUno);
		}
	else if (numeroDos > numeroUno && numeroDos > numeroTres)
		{
		printf("El numero %d es mayor a todos", numeroDos);
		}
	else if (numeroTres > numeroUno && numeroTres > numeroDos)
		{
		printf("El numero %d es mayor a todos", numeroTres);
		}

	return 0;
}
