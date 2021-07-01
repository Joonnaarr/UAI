#include <stdio.h>
#include <stdlib.h>

/* 7. Ingresar N temperaturas , indicar e imprimir la máxima y mínima */

int main(int argc, char *argv[]) {
	
	int i, j, temp;
	int tempMayor=0, tempMenor=0;
	
	for (i=0; i<4; i++){
		printf("Ingrese temperatura: ");
		scanf("%d", &temp);
		
		if (i==0){
			tempMayor = temp;
			tempMenor = temp;}
		else if (temp > tempMayor){
			tempMayor = temp;}
		else if (temp < tempMenor){
			tempMenor = temp;}
	}
	printf("\nLa temperatura mayor es %d y la menor es %d", tempMayor, tempMenor);
	printf("\n%d, %d, %d", temp, tempMayor, tempMenor);
	return 0;
}
