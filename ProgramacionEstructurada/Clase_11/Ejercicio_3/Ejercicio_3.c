
#include <stdio.h>
#include <stdlib.h>
#define valorH 1

int main(int argc, char *argv[]) {
int cantemp;
int legajo=0;
int cantHorasTrab=0;
int valorMes[12][50];
char nombre[50][30]; //50 filas 30 caracteres
int mes[50][12];
int total[50]={};
int totalMes[12];
int totalX=0;

int i=0, x=0;

//printf("Cuantos empleados desea cargar? "); scanf("%d", &cantemp);
//printf("Ingrese su legajo: "); scanf("%d", &legajo);
//printf("Ingrese el valor de la hora: "); scanf("%d", &valorH);
//printf("Ingrese el mes (1-12): "); scanf("%d", &mes);


//for cantidad horas mensuales
//printf("%d", totalX);

for(i=1; i<=2;i++){
	printf("Ingrese nombre del empleado: "); 
		fflush(stdin);
		gets(nombre[i]);
		fflush(stdin);
	for (x=1; x<=2; x++){
		printf("Ingrese cantidad de horas trabajadas para el mes %i: ", x); 
		scanf("%i",&cantHorasTrab);
		mes[i][x]=cantHorasTrab*valorH;
		total[i]+=mes[i][x];
		
		}
		totalX+=total[i];
		totalMes[i]+=totalX;
		
		
	}
	
	
	

printf("%d\n", i);
printf("%d\n", x);
printf("%s\n", nombre[1]);
printf("%d\n", mes[1][1]);
printf("%d\n", totalMes[1]);
printf("%d\n", total[1]);
printf("%d\n", totalX);
	
	
	
return 0;
}
