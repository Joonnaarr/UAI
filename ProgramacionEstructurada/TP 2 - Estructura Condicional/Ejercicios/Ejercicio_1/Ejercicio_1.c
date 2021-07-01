#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos,sumar;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	if(numeroUno == numeroDos)
		{
		printf("Los numeros son iguales\n");
		}
	else {
		printf("Los numeros no son iguales");
		}	
	
	return 0;
}
