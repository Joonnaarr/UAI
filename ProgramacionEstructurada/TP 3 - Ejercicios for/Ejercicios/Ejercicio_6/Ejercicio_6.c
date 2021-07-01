#include <stdio.h>
#include <stdlib.h>

/* 6. Ingresar los datos de facturación de una empresa. Se conoce Número de factura, 
Número de artículo, Cantidad vendida y Precio unitario Los datos finalizan con numero 
de factura = 0, cada factura sólo tiene un número de artículo, y existen sólo tres artículos. */

int main(int argc, char *argv[]) {
	int i,fact, numeroFact=0,totalF[10], articulo, cantVendida, precioUni1=10, precioUni2=20, precioUni3=30,j;
	int art1, art2, art3, total1[50], total2[50], total3;
	printf("Cuantas facturas desea agregar: "); scanf("%i", &numeroFact);
	for(i=0;i<numeroFact;i++){
	
	printf("Ingrese el numero de factura: ");
	scanf("%i", &fact);
	totalF[i]=numeroFact;
	
	printf("Que articulo desea elegir\n1 - Lavandina\n2 - Detergente\n3 - Agua\n");
	scanf("%d", &articulo);
	switch(articulo){
		case 1:
			printf("Cuantas cantidades:");
			scanf("%d", &art1);
			total1[i] = precioUni1 * art1;
			total2[i]+=total1[i];
			break;
		case 2:
			printf("Cuantas cantidades:");
			scanf("%d", &art2);
			total1[i]= precioUni2 * art2;
			total2[i]+=total1[i];
			
			break;
		case 3:
			printf("Cuantas cantidades:");
			scanf("%d", &art3);
			total1 [i]= precioUni3 * art3;
			total2[i]+=total1;
			break;
		case 0 : case 4 : case 5 :
		
			exit(-1);
			break;
			
		}
	} //while (numeroFact!=0);
	printf("%d", total1);
	for(i=0;i<numeroFact;i++){
		printf("%i\n",totalF[i]);
		printf("%d", total2[i]);
	}
	
	
	return 0;
}
