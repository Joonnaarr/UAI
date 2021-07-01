#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeroUno, numeroDos, numeroTres, resultado;
	printf("Ingrese el primer valor: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo valor: ");
	scanf("%d", &numeroDos);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &numeroTres);
	resultado = numeroUno + numeroDos + numeroTres;
	printf("El resultado es; %d", resultado);
	return 0;
}
