#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valorHora;
	int sueldo, horasTrabajadas;
	
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	printf("Ingrese el valor de la hora: ");
	scanf("%d", &valorHora);
	
	sueldo = horasTrabajadas * valorHora;
	printf("Su sueldo es: %d", sueldo);
	
	return 0;
}
