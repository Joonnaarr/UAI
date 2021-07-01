#include <stdio.h>
#include <stdlib.h>

/* 13. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo que 
        los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80. */

int main(int argc, char *argv[]) {
	int horas, categoria, legajo;
	int catUno=50, catDos=70, catTres=80;
	int sueldoCat1, sueldoCat2, sueldoCat3;
	
	printf("Ingrese las horas trabajadas: ");
	scanf("%d", &horas);
	do {
	printf("Ingrese su categoria: ");
	scanf("%d", &categoria);
	} while (categoria <1 || categoria >3);
	
	switch(categoria)
	{
		case 1:
			sueldoCat1 = horas * 50;
		case 2:
			sueldoCat2 = horas * 70;
		case 3:
			sueldoCat3 = horas * 80;
			}
	
	if (categoria ==1){
		printf("Su sueldo es: %d", sueldoCat1);}
	else if (categoria ==2){
		printf("Su sueldo es: %d", sueldoCat2);}
	else if (categoria ==3){
		printf("Su sueldo es: %d", sueldoCat3);}

	
	return 0;
}
