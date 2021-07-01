#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i=0;
	int j=25, numero; 
	int promedio;
	int total;
		
	for(i=1; i<=25;i++){
		printf("Ingrese el sueldo numero %d: ",i); 
		scanf("%d", &numero);
		total += numero;
	}
	promedio = total/j;
	printf("La suma total es: %d\n", total);
	printf("El promedio total es: %i", promedio);
	return 0;
}

