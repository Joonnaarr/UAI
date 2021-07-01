#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int edadUno, alturaUno;
	int edadDos, alturaDos;
	printf("Ingrese la edad de la primer persona: ");
	scanf("%d", &edadUno);
	printf("Ingrese su altura: ");
	scanf("%d", &alturaUno);
	
	printf("Ingrese la edad de la segunda persona: ");
	scanf("%d", &edadDos);
	printf("Ingrese su altura: ", alturaDos);
	scanf("%d", &alturaDos);
	
	if (edadUno > edadDos)
		{
		printf("La edad mayor es %d", edadUno);
		}
	else if (edadDos > edadUno)
		{
		printf("La edad mayor es %d", edadDos);
		}
	return 0;
}
