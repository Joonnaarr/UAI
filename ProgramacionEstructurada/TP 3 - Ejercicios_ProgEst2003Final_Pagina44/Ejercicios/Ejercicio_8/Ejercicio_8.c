#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i=0, n;
	int j=10, numero; 
	int promedio;
	int total;
	int cont;
		
	printf("Cuandos valores quiere ingresar? ");
	scanf("%d", &n);
	for(i=1; i<=n;i++){
		printf("Ingrese el valor %d: ",i); 
		scanf("%d", &numero);
		total += numero;
		cont++;
	}
	promedio = total/j;
	printf("La suma total es: %d\n", total);
	printf("El promedio total es: %i\n", promedio);
	printf("La cantidad de numeros ingresados es: %d", cont);
	return 0;
}



