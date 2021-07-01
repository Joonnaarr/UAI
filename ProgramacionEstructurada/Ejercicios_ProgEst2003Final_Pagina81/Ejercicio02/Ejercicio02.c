#include <stdio.h>
#include <stdlib.h>

/*	Ingresar 10 sueldos y edades de una empresa y calcular
1.	sueldo promedio
2.	sueldo promedio de los empleados que tienen entre 23 y 40 años
3.	edad promedio
4.	cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.
5.	cantidad de empleados con edades menor a la edad promedio
 */
 
int i=0;
int sueldos[10], edad[10];
int contSueldosM=0,datos=0;
int totalMayor=0, totalMayor2=0;

void Promedio2340(){
	for(i=0;i<datos;i++){
	if (edad[i]>=23 && edad[i]<=40) {
		totalMayor += sueldos[i];
		contSueldosM++;
		}
	}
	totalMayor2 = totalMayor / contSueldosM;
	printf("El sueldo promedio entre 23-40 es: %d\n", totalMayor2);
}
void Promedios(int a, int b, int c){
	a=b/c;
	if(a>0){
		printf("El promedio es: %i", a);
	}
}

int main(int argc, char *argv[]) {
	int sumaSueldos=0, sumaEdades=0;
	int promedioSueldos=0, promedioEdad=0;
	int contSueldos=0, contEdades=0;
	
	printf("Cuantos datos va a ingresar\? ");
	scanf("%d", &datos);
	
	for (i=0; i<datos; i++){
		printf("Ingrese su sueldo: "); 
		scanf("%d", &sueldos[i]);
		sumaSueldos += sueldos[i];
		contSueldos++;
		
		system("cls");
		
		printf("Ingrese su edad: "); 
		scanf("%d", &edad[i]);
		contEdades++;
		sumaEdades += edad[i];
		system("cls");
	}
	printf("Promedio Sueldos : \n");
	Promedios(promedioSueldos,sumaSueldos,contSueldos);
	printf("Promedio Edades : \n");
	Promedios(promedioEdad,sumaEdades,contEdades);
	Promedio2340();
	
	return 0;
}
