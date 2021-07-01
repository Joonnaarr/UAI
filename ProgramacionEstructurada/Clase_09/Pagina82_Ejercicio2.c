#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* 
Ingresar 10 sueldos y edades de una empresa y calcular
1.	sueldo promedio
2.	sueldo promedio de los empleados que tienen entre 23 y 40 años
3.	edad promedio
4.	cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
5.	cantidad de empleados con edades menor a la edad promedio
*/

int sueldos[11], edades[11];
	int s2340=0;
	float su2340=0.0, promedio=0.0, promedioSueldo=0.0, promedioSueldo2=0.0;
	int contsueldo=0, contedad=0, contedad1=0;
	int acumulador2=0;
	int cant2=0;

int main(int argc, char *argv[]) {
	
	for(i=1;i<11;i++){
		printf("Ingrese sueldo: ");
		scanf("%d", &sueldos[i]);
		
		printf("Ingrese su edad: ");
		scanf("%d", &edades[i]);
		
		contsueldo++;
		contedad++;
	
		sueldos[0]+=sueldos[i];
		edades[0]+=edades[i];
		
		if (edades[i]>=30 && edades[i]<=40)
		{
			s2340++;
			su2340+=sueldos[i];
		}
		if (edades[i]>30 && sueldos[i]<1000)
		{
			contedad1++;
		}
		
	}
	
	promedio=(float)edades[0]/contedad;
	promedioSueldo=(float)sueldos[0]/contsueldo;
	for (i=;i<11;1++){
		if(edades[i]<promedio){
			cant2++;
		}	
	}
	
	printf("El sueldo promedio es: %.2f\n", promedioSueldo);
	printf("La edad promedio es: %.2f\n", promedio);
	printf("El sueldo promedio de los trabajadores entre 23 y 40 es: %.2f", )
	
	
	return 0;
}
