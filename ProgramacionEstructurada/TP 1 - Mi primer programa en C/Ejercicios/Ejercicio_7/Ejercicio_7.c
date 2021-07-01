#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno, numeroDos;
	int suma, producto, resta;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &numeroUno);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &numeroDos);
	
	suma = numeroUno + numeroDos;
	printf("La suma es: %d \n", suma);
	producto = numeroUno * numeroDos;
	printf("El producto es: %d \n", producto);
	resta = numeroUno - numeroDos;
	printf("La resta es: %d", resta);
	
	
	return 0;
	return 0;
}
