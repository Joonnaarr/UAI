#include <stdio.h>
#include <stdlib.h>

/* 5. Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros */ 

int main(int argc, char *argv[]) {
	int i=1, n=0; // Variables para los FOR
	int sumaPositivos=0, promedioPositivos=0, sumaNegativos=0, promedioNegativos=0;
	int contNumPositivos=0, contNumNegativos=0, contNumCero=0; // Variables Contadores
	int numIngresados[i];
	
	printf("CUantos numeros va a ingresar? ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		printf("Ingrese el numero %d: ",i);
		scanf("%d", &numIngresados[i]);
		if (numIngresados[i] > 0){
			sumaPositivos += numIngresados[i];
			contNumPositivos++;
			promedioPositivos = sumaPositivos / contNumPositivos;}
		if (numIngresados[i] < 0){
			sumaNegativos += numIngresados[i];
			contNumNegativos++;
			promedioNegativos = sumaNegativos / contNumNegativos;}
		if (numIngresados[i] == 0){
			contNumCero++;}
	}
	
	//for (i=1; i<=n; i++){
	//	printf("\nNumero %d: %d", i, numIngresados[i]);}
	
	//printf("\nSuma %d", sumaPositivos);
	printf("\nEl promedio de numeros positivos es: %d", promedioPositivos);
	printf("\nCantidad de numeros positivos: %d\n", contNumPositivos);
	printf("\nEl promedio de numeros negativos es: %d", promedioNegativos);
	printf("\nCantidad de numeros negativos: %d\n", contNumNegativos);
	printf("\nCantidad de numeros en cero: %d", contNumCero);
	
	
	
	
	
	return 0;
}
