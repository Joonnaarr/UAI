#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valorHora, sueldo, horasTrabajadas;
	int premioCien=100;
	int premioMil=1000;
	
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	printf("Ingrese el valor de la hora: ");
	scanf("%d", &valorHora);
	
	if (horasTrabajadas > 150){
		sueldo = (horasTrabajadas * valorHora) + premioMil; 
		printf("Su sueldo es: %d \n", sueldo);
	}
	else if (horasTrabajadas > 50) {
		sueldo = (horasTrabajadas * valorHora) + premioCien; 
		printf("Su sueldo es: %d \n", sueldo);
	}		
	return 0;
}
