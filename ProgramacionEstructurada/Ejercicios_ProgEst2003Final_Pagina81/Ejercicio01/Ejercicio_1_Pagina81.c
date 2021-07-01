#include <stdio.h>
#include <stdlib.h>

#define elementos 4

/* 1.	Ingresar datos y cargar un vector de 50 elementos, calcular

	-	la suma de todos los elementos
	-	el producto de todos los elementos
	-	mostrar del vector el elemento 50 al 1
	-	imprimir las componentes de indice par
	-	imprimir las componentes de indice impar
 */

int main(int argc, char *argv[]) {
	
	int i;
	int numero[10], acumNumero=0;
	int datos=0;
	
	for (i=1; i<elementos;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numero[i]);
		acumNumero+=numero[i];
	}
	
	system("cls");
	printf("La suma total de los numeros ingresados es: %d\n", acumNumero);
	for (i=elementos; i>1; i--){
		printf("El en la posici�n %d es: %d\n",numero[10], numero[i]);
	}
	
	
	
	
	
	return 0;
}
