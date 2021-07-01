#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

/* 3. Ingresar valores hasta uno = 0, indicar e imprimir la cantidad de números ingresados y su promedio */
	
int i=5, j, listadoNumeros, contNumeros;
int promedio;
int numero[5];
int suma=0;
		
	for(i<=5; i>0; i--){
		printf("Ingrese un numero %d: ",i); 
		scanf("%i", &numero[5]);
		suma += numero[5];
		contNumeros++;
	}
	promedio = suma / 5;
	printf("\nLa suma de los numeros ingresados es: %d", suma);
	printf("\nLa cantidad de numeros ingresados son: %d", contNumeros -1);
	printf("\nEl promedio de los numeros es: %d",promedio);
	
	
	
	return 0;
}

/* 
if (factura>1000){
		facturaIMP= factura;
		contFactura++;}
	else if (factura > 400 && factura < 700){
		factura2 = factura;
		contFactura47++;} 
		
	}
	totalFactura += factura;
	totalFactura2 += factura2;
	total = totalFactura + totalFactura2 + factura;
	
	printf("\nLa suma total de las facturas es: %d\n", total);
	printf("\nFacturas cargadas mayores a 1000: %d\n", contFactura);
	printf("La factura mayor a 1000 es: %i\n", facturaIMP);
	printf("Facturas cargadas entre 400 y 700 es: %d\n", contFactura47);
	printf("La factura mayor entre 400 y 700 es: %d\n", factura2);
	*/
