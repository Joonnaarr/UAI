#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* 
2. Una empresa conoce el nombre, sueldo y categoría de sus empleados, son 4 categorías, y la cantidad de empleados es variable N.
Se desea saber:
A. Cantidad de empleados por categoría
B. Cantidad de empleados que cobran mas de $ 2000
C. Cantidad de empleados de la categoría 1 con sueldo mayor a $ 1000
D. Sueldo máximo y a qué empleado pertenece
E. Sueldo mínimo y a que empleado pertenece
F. Categoría con más empleados
G. Porcentual en cantidad de empleados de cada categoría sobre el total de la empresa 
*/

int main(int argc, char *argv[]) {
	
	int i=0, categoria=0;
	int cantEmpleados=0, sueldo=0, sueldoMax=0, sueldoMin=0, sueldoCat1MayorMil=0;
	int sueldoCase1=0, sueldoCase2=0, sueldoCase3=0, sueldoCase4=0;
	int contCat1=0, contCat2=0, contCat3=0, contCat4=0, contCatMayorEmp=0;
	int contSueldoMayorMil=0, contSueldoMayor2Mil=0; // contSueldoMayor2MilCase2=0, contSueldoMayor2MilCase3=0, contSueldoMayor2MilCase4=0;
	int bandera=1;
	char nombre[30], nombreMax[30][30], nombreMin[30][30];
	
	do {
	printf("Empleados a ingresar: "); scanf("%d", &cantEmpleados);
	} while (cantEmpleados < 0);
	
	system("cls");
	for (i=0; i<cantEmpleados; i++){
		printf("Ingrese el nombre: ");
		fflush(stdin);
		gets(nombre);
		fflush(stdin);
		
		system("cls");
		printf("Ingrese su sueldo: "); scanf("%d", &sueldo);
	
		system("cls");
		printf("Categoria 1\n"); printf("Categoria 2 \n"); printf("Categoria 3\n"); printf("Categoria 4\n"); printf("Ingrese su categoria: "); scanf("%d", &categoria);
		
		system("cls");
		switch(categoria){
			case 1: 
				contCat1++;
				sueldoCase1+=sueldo;
				if (sueldo>1000){
					contSueldoMayorMil++;}
				else if (categoria>2000){
					contSueldoMayor2Mil++;}
				break;
			case 2: 
				contCat2++;
				sueldoCase2+=sueldo;
				if (sueldo>2000){
					contSueldoMayor2Mil++;}
				break;
			case 3: 
				contCat3++;
				sueldoCase3+=sueldo;
				if (sueldo>2000){
					contSueldoMayor2Mil++;}
				break;
			case 4: 
				contCat4++;
				sueldoCase4+=sueldo;
				if (sueldo>2000){
					contSueldoMayor2Mil++;}
				break;
				}
				
		if(bandera==1){
			sueldoMax = sueldo;
			strcpy(nombreMax,nombre);
			sueldoMin = sueldo;
			strcpy(nombreMin, nombre);
			bandera = 0;
			}
		
		else if (sueldo<sueldoMin){
			sueldoMin = sueldo;
			strcpy(nombreMin,nombre);
			}
		else if (sueldo>sueldoMax){
			sueldoMax = sueldo;
			strcpy(nombreMax,nombre);
			}
				
	}
	
	printf("Cantidad de empleados en Categoria 1: %d\n", contCat1);
	printf("Cantidad de empleados en Categoria 2: %d\n", contCat2);
	printf("Cantidad de empleados en Categoria 3: %d\n", contCat3);
	printf("Cantidad de empleados en Categoria 4: %d\n\n", contCat4);
	
	printf("Cantidad de empelados que cobran mas de 2000: %d\n", contSueldoMayor2Mil);
	
	printf("Cantidad de empleados de la Categoria 1 con sueldo mayor a 1000: %d\n\n", contSueldoMayorMil);
	
	printf("El sueldo maximo es de $%d y pertenece a %s\n", sueldoMax, nombreMax);
	printf("El sueldo minimo es de $%d y pertenece a %s\n\n", sueldoMin, nombreMin);
	
	if (contCat1 > contCat2 && contCat1 > contCat3 && contCat1 > contCat4){
	printf("La categoria que mas cobra es la 1\n\n");}
	
	else if (contCat2 > contCat1 && contCat2 > contCat3 && contCat2 > contCat4){
	printf("La categoria que mas cobra es la 2\n\n");}
	
	else if (contCat3 > contCat1 && contCat3 > contCat2 && contCat3 > contCat4){
	printf("La categoria que mas cobra es la 3\n\n");}

	else if (contCat4 > contCat1 && contCat4 > contCat2 && contCat4 > contCat3){
	printf("La categoria que mas cobra es la 4\n\n");}
	
	
	
	
	
	return 0;
}
