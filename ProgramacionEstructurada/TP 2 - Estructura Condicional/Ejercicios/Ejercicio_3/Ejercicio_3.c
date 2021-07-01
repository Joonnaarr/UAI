#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos,producto;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	if(numeroUno > numeroDos)
		{
		producto = numeroUno * numeroDos;
		printf("El el producto es: %d", producto);
		}
	else if(numeroUno == numeroDos)
		{
		printf("Los numeros son iguales");
		}	
	else
		{
		printf("El primer numero no es mayor");
		}	
	return 0;
}

