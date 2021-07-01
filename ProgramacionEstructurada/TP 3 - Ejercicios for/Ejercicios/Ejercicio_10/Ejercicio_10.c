#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
// 10. Ingresar las edades y estaturas de los alumnos, calcular e imprimir la edad promedio, 
// la edad mayor y la estatura menor, los datos finalizan con edad = 0

int main(){
	int i, edad[30], edadTotal, edadMayor=0, edadMenor=0, sumaEdades, edadPromedio;
	float estatura[30];
	for(i=0;i<2;i++){
		printf("Cuantos anios tiene?: "); 
		scanf("%i", &edad[i]);
		edadTotal += edad[i];
		printf("Que altura tiene?: "); 
		scanf("%f",&estatura[i]);
		
		if(edad[i]>edadMayor){
			edadMayor = edad[i];}
		else if(edad[i]<edadMayor){
			edadMenor=edad[i];
		}
	}
	//sumaEdades = edadMayor + edadMenor;
	edadPromedio = edadTotal/i;
	printf("La edad promedio es: %i\n",edadPromedio);
	printf("Edad Mayor %i\n", edadMayor);
	printf("Edad Menor %i\n",edadMenor);
	
	for (i=0; i<2; i++){
		printf("%i\n", edad[i]);
		printf("%.2f\n", estatura[i]);
	}
	
	return 0;
}
