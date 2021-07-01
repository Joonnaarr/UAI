#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int numeroUno=5;
	int numeroDos=6;
	int numeroTres=1;
	int resultadoUno;
	int resultadoDos;

	resultadoUno=numeroUno + numeroDos;
	resultadoDos=resultadoUno + numeroTres;

	printf("El resultado es %d \n ", resultadoDos);

	return 0;

}
