#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno, numeroDos, numeroTres, numeroCuatro, suma;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &numeroTres);
	printf("Ingrese el cuarto numero: ");
	scanf("%d", &numeroCuatro);
	
	suma = (numeroUno + numeroDos + numeroTres + numeroCuatro);
	printf("La suma total es: %d \n", suma);

	if (numeroUno > numeroDos && numeroUno > numeroTres && numeroUno > numeroCuatro)
		{
		printf("El numero %d es mayor a todos", numeroUno);
		}
	else if (numeroDos > numeroUno && numeroDos > numeroTres && numeroDos > numeroCuatro)
		{
		printf("El numero %d es mayor a todos", numeroDos);
		}
	else if (numeroTres > numeroUno && numeroTres > numeroDos && numeroTres > numeroUno)
		{
		printf("El numero %d es mayor a todos", numeroTres);
		}
	else if (numeroCuatro > numeroUno && numeroCuatro > numeroDos && numeroCuatro > numeroTres )
		{
		printf("El numero %d es mayor a todos", numeroCuatro);
		}	
		
	return 0;
}
