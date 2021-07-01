#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno, numeroDos, numeroTres, resultado;
	printf("Ingrese el primer valor: ");
	scanf("%i", &numeroUno);
	printf("Ingrese el segundo valor: ");
	scanf("%i", &numeroDos);
	printf("Ingrese el tercer valor: ");
	scanf("%i", &numeroTres);
	
	resultado = numeroUno + numeroDos;
	printf("El resultado es: %i", resultado);
	
	
	//  printf("Numero:%i", numeroUno);
	
	return 0;
}
