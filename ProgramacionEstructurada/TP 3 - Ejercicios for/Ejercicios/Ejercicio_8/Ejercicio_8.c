#include <stdio.h>
#include <stdlib.h>

/* 8. Ingresar temperaturas hasta una temperatura igual a 1000, indicar e imprmir la mayor y menor */

int main(int argc, char *argv[]) {
	
	int i, j, temp;
	int tempMayor=0, tempMenor=0;
	
	for (i=0; i<100; i++){
		printf("Ingrese temperatura: ");
		scanf("%d", &temp);
		
		if (i==0){
			tempMayor = temp;
			tempMenor = temp;}
		else if (temp > tempMayor){
			tempMayor = temp;}
		else if (temp < tempMenor){
			tempMenor = temp;}
		
		if (temp == 1000){
			tempMayor == temp;
			break;}
	}
	printf("\nLa temperatura mayor es %d y la menor es %d", tempMayor, tempMenor);
	printf("\n%d, %d, %d", temp, tempMayor, tempMenor);
	return 0;
}

if (edad>edadMayor){
	edadMayor = edad[i];
	edadMenor = edad[i];}
else if (edad[i] < edadMayor){
	edadMenor = edad[i]}