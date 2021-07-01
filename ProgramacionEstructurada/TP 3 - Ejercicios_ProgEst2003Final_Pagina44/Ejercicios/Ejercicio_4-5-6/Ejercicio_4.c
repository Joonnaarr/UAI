#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int i=5, j, totalFactura, factura, factura2, factura3, factura47, facturaIMP, sumar, importe, totalFactura2;
int contFactura, factMayorMil, contFactura47, total;
		
	for(i<=5; i>0; i--){
		printf("Ingrese el importe de la factura %d: ",i); 
		scanf("%i", &factura);
	
	if (factura>1000 && factura<9999) {
		facturaIMP= factura;
		contFactura++;}
	else if (factura > 400 && factura < 700){
		factura2 = factura;
		contFactura47++;} 
	else if (factura > 10000){
		factura3 = factura;}
	}
	totalFactura += factura;
	totalFactura2 += factura2;
	total = totalFactura + totalFactura2 + factura;
	
	printf("\nLa suma total de las facturas es: %d\n", total);
	printf("\nFacturas cargadas mayores a 1000: %d\n", contFactura);
	printf("La factura mayor a 1000 es: %i\n", facturaIMP);
	printf("Facturas cargadas entre 400 y 700 es: %d\n", contFactura47);
	printf("La factura mayor entre 400 y 700 es: %d\n", factura2);
	printf("La factura mayor a 10000 es: %d\n", factura3);
	
	
	
	return 0;
}


