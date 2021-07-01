#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int valorHora;
	int sueldo, horasTrabajadas;
	
	printf("Ingrese la cantidad de horas trabajadas: ");
	scanf("%d", &horasTrabajadas);
	printf("Ingrese el valor de la hora: ");
	scanf("%d", &valorHora);
	
	if (valorHora == 10){
		sueldo = horasTrabajadas * valorHora;
		printf("Su sueldo es: %d \n", sueldo);
	}
	else {
		printf("Error: Los valores ingresados son incorrectos");
	}	
	return 0;
}


