#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno, numeroDos, numeroTres, resultado, resultado2;
	
	

	printf("Ingrese el primer valor: ");
	scanf("%i", &numeroUno);
	printf("Ingrese el segundo valor: ");
	scanf("%i", &numeroDos);
	printf("Ingrese el tercer valor: ");
	scanf("%i", &numeroTres);
	
	
	resultado = numeroUno + numeroDos;
	resultado2 = resultado + numeroDos;
	printf("El resultado es: %i \n", resultado2);
	
	char a;
    printf("Ingrese el primer caracter: %c", a);
	scanf("%c", &a);
	printf("Se leyo el caracter: %c\n", a);
	
    //
    //
	
	
	
	
	return 0;
}
