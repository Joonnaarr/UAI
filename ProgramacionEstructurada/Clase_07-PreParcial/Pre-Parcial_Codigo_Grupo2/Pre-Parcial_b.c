#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nombre[100][30]; 
	int i, categoria, depto, departamento;
	int cat1=85000, cat2=40000, cat3=65000, cat4=30000;
	int swCat1=0, swCat2=0, swCat3=0, swCat4=0;
	int contCat1=0, contCat2=0, contCat3=0, contCat4=0;
	int contDepto1=0, contDepto2=0, contDepto3=0;
	int swDepto1, swDepto2, swDepto3;
	//char depto1[30], depto2[30], depto3[30];
	float importe=0;
	float totalDepto1=0, totalDepto2=0, totalDepto3=0;
	float sueldoTotalEmpresa;
	int cantidadCat1=0, cantidadCat2=0, cantidadCat3=0, cantidadCat4=0;
	int totalPromedioCat1=0, totalPromedioCat2=0, totalPromedioCat3=0;
	
	
	for (i=0; i<4; i++){
		system("cls");
		printf("Ingrese su nombre: ");
		fflush(stdin);
		gets(nombre[i]);
		fflush(stdin);
		system("cls");
		
		printf("Ingrese su categoria: \n");
		printf("1 - Analista Senior\n");
		printf("2 - Analista Junior\n");
		printf("3 - Programador\n");
		printf("4 - Operador\n");
		scanf("%d", &categoria);
		switch(categoria){
			case 1: 
				swCat1 += cat1;
				importe = cat1;
				contCat1++;
				break;
			case 2: 
				swCat2 += cat2;
				importe = cat2;
				contCat2++;
				break;
			case 3: 
				swCat3 += cat3;
				importe = cat3;
				contCat3++;
				break;
			case 4: 
				swCat4 += cat4;
				importe = cat4;
				contCat4++;
				break;
			}
		system("cls");
		printf("Ingrese departamento: \n");
		printf("1 - Desarrollo\n");
		printf("2 - Analista\n");
		printf("3 - Infraestructura\n");
		scanf("%d", &departamento);
		switch(departamento){
			case 1: 
				totalDepto1 += importe;
				contDepto1++;
				break;
			case 2: 
				totalDepto2 += importe;
				contDepto2++;
				break;
			case 3: 
				totalDepto3 += importe;
				contDepto3++;
				break;
			}
	
	}
	system("cls");
	sueldoTotalEmpresa = totalDepto1 + totalDepto2 + totalDepto3;
	totalPromedioCat1 = (sueldoTotalEmpresa / swCat1) * 100;
	
	printf("########## A ##########\n");
	printf("Total Departamento 1: %2.f\n", totalDepto1);
	printf("Total Departamento 2: %2.f\n", totalDepto2);
	printf("Total Departamento 3: %2.f\n\n", totalDepto3);
	
	if (swCat1 > swCat2 && swCat1 > swCat3 && swCat1 > swCat4){
	printf("########## B ##########\n");
	printf("La categoria que mas cobra es la 1\n\n");}
	
	else if (swCat2 > swCat1 && swCat2 > swCat3 && swCat2 > swCat4){
	printf("########## B ##########\n");
	printf("La categoria que mas cobra es la 2\n\n");}
	
	else if (swCat3 > swCat1 && swCat3 > swCat2 && swCat3 > swCat4){
	printf("########## B ##########\n");
	printf("La categoria que mas cobra es la 3\n\n");}
	
	else if (swCat4 > swCat1 && swCat4 > swCat2 && swCat4 > swCat3){
	printf("########## B ##########\n");
	printf("La categoria que mas cobra es la 4\n\n");}
	
	printf("########## C ##########\n");
	printf("Cantidad de empleados en categoria 1 es: %d\n",contCat1);
	printf("Cantidad de empleados en categoria 2 es: %d\n",contCat2);
	printf("Cantidad de empleados en categoria 3 es: %d\n\n",contCat3);
	
	printf("########## D ##########\n");
	printf("Cantidad de empleados en el departamento 2 es: %d\n\n", contDepto2);
	
	printf("########## E ##########\n");
	printf("La suma total a pagar en sueldo es: %2.f\n\n", sueldoTotalEmpresa);
	
	printf("########## F ##########\n");
	printf("Promedio total categoria 1: %d\n", cat1);
	printf("Promedio total categoria 2: %d\n", cat2);
	printf("Promedio total categoria 3: %d\n", cat3);
	printf("Promedio total categoria 4: %d\n", cat4);
	

return 0;
}
	
	
	


