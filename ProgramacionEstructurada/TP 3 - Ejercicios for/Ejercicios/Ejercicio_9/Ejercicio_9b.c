#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
//Ingresar los sueldos y nombres de 30 empleados, indicar e imprimir el sueldo mayor y a quién pertenece
int main(){
	int sueldos[30], i,mayor=0;
	char nombre [30][30],j[30];
	for(i=0;i<30;i++){
		printf("Ingresar el nombre del empleado: "); 
		fflush(stdin);
		gets(nombre[i]);
		fflush(stdin);
		printf("Ingresar el sueldo: "); scanf("%i",&sueldos[i]);
		if(sueldos>mayor){
			mayor =sueldos[i];
			fflush(stdin);
			strcpy(j,nombre[i]);
			
		}
	}
	
	printf("El empleado: %s tiene un salario de %i", j, mayor);

	
	return 0;
}
