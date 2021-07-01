#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int annoNacimiento;
	int edad;
	int anno= 2020;
	printf("Ingrese su edad: ");
	scanf("%d", &edad);
	annoNacimiento = anno - edad;
	printf("Usted nacio en el año: %d", annoNacimiento);
	
	return 0;
}
