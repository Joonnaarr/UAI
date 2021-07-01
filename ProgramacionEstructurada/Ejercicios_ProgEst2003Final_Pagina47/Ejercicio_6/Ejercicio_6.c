#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ladoA, ladoB;
	//int ladoC = ;
	float hipotenusa; 
	int perimetro, superficie;
	
	printf("Ingrese el lado A [altura] del rectangulo: ");
	scanf("%d", &ladoA);
	printf("Ingrese el lado B [base] del rectangulo: ");
	scanf("%d", &ladoB);
	
	hipotenusa = sqrt(ladoA * ladoA + ladoB * ladoB);
	printf("La diagonal es: %.2lf \n", hipotenusa);
	perimetro = ladoA * 2 + ladoB * 2;
	printf("El perimetro es: %d \n", perimetro);
	superficie = ladoA * ladoB / 2;
	printf("La superficie es: %d", superficie);
	
	
	return 0;
}
