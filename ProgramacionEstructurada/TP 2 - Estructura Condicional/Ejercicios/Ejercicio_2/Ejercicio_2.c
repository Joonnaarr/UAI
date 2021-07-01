#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos,sumar;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	if(numeroUno == 0)
		{
		printf("El numero es 'Cero' %d", numeroUno);
		}
	else if(numeroUno > 0)
		{
		printf("El numero %d es positivo", numeroUno);
		}	
	else if(numeroUno < 0)
		{
		printf("El numero %d es negativo", numeroUno);
		}	
	return 0;
}

