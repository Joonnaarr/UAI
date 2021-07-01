#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define cat1 1500
#define cat2 2000
#define cat3 2500

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nombre [30][30];
	int i=0, f=0;
	int categoria=0, addantiguedad1=100, addantiguedad2=100, addantiguedad3=100;
	int contCat1=0, contCat2=0, contCat3=0;
	int switchCat1=0, switchCat2=0, switchCat3=0, sumaCont=0;
	int antiguedad, swCat1Antiguedad=0, swCat2Antiguedad=0, swCat3Antiguedad=0;
	int sueldoPromedio=0, sumaSwCatMasAntiguedad=0;
	int sueldoMaximo=0, mayor=0, sueldo=0, sueldoMayor=0;
	char nomMax [30][30];
	
	
	system("cls");
	for (i=0; i<5; i++){ // inicio for
	printf("Ingrese su nombre: ");
	fflush(stdin);
	scanf("%s^\n", nombre[i]);
	fflush(stdin);
	
	system("cls");
	printf("Ingrese su antiguedad: ");
	scanf("%d", &antiguedad);
	
	system("cls");
	do {
	printf("Categoria 1");
	printf("\nCategoria 2");
	printf("\nCategoria 3\n");
	printf("Ingrese su categoria: ");
	scanf("%d", &categoria);
	}while (categoria < 0 || categoria > 3);
	
	switch(categoria){
		case 1:
			switchCat1 += cat1;
			switchCat1 += (addantiguedad1*antiguedad);
			sueldo = switchCat1;
			contCat1++;
			break;
		case 2:
			switchCat2 += cat2;
			switchCat2 += (addantiguedad1*antiguedad);
			sueldo = switchCat2;
			contCat2++;	
			break;
		case 3:
			switchCat3 += cat3;
			switchCat3 += (addantiguedad1*antiguedad);
			sueldo = switchCat3;
			contCat3++;
			break;
		}
	
	if(sueldoMayor==0){
		sueldoMayor = sueldo;
		strcpy(nomMax,nombre);
	}
	if(sueldo>sueldoMayor){
		sueldoMaximo = sueldo;
		strcpy(nomMax,nombre);
	}
	
	sumaCont = contCat1 + contCat2 + contCat3;
	sumaSwCatMasAntiguedad = switchCat1 + switchCat2 + switchCat3;
	sueldoPromedio = sumaSwCatMasAntiguedad / sumaCont;
	
	system("cls");
	} // fin for
	
	system("cls");
	
	printf("Cantidad empleados en Categoria 1: %d\n", contCat1);
	printf("Cantidad empleados en Categoria 2: %d\n", contCat2);
	printf("Cantidad empleados en Categoria 3: %d\n\n", contCat3);
	
	printf("Total de sueldo por categoria 1 + Antiguedad: %d\n", switchCat1);
	printf("Total de sueldo por categoria 2 + Antiguedad: %d\n", switchCat2);
	printf("Total de sueldo por categoria 3 + Antiguedad: %d\n\n", switchCat3);
	
	printf("El sueldo maximo es de $ %d y corresponde a %s",sueldoMaximo,nomMax);
	
	/*
	printf("Suma contadores: %d\n", sumaCont);
	printf("Suma total Sw %d\n", sumaSwCatMasAntiguedad);
	printf("Sueldo promedio Gral: %d\n\n", sueldoPromedio);
	printf("Mayor %d\n", mayor);
	printf("SueldoMaximo %d\n", sueldoMaximo);
	printf("Suedlo: %d\n", sueldo);
	printf("SwCat1: %d\n", switchCat1);
	*/
	
	/*
	printf("Listado completo de nombres: \n");
    for(i=0;i<3;i++){
        printf("%s\n",nombre[i]);}
	*/      
	

	return 0;
}
