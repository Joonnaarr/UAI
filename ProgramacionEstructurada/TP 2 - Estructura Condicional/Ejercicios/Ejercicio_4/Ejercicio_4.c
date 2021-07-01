#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos,restaUno, restaDos;
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	if(numeroUno > numeroDos)
		{
		restaUno = numeroUno - numeroDos;
		printf("La resta es: %d", restaUno);
		}
	else if (numeroDos || numeroUno < 0)
		{
		//restaDos = numeroUno - numeroDos;
		printf("Numeros incorrecto");
		}		
	return 0;
}
