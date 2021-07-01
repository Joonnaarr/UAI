#include <stdio.h>
#include <stdlib.h>
//Ingresar facturas hasta nro de factura = 0, sumar sus importes, indicar el total gastado y cúales y cuantas superan los $1000
int main(){
	//int i, factura=5, total, valor, imp[5], cont;
	int i, factura, valor, imp[5],cont,total;
	for(factura = 5;factura>0;factura--){
		printf("Ingrese el valor de cada venta: "); scanf("%i", &valor);
		if(valor>=1000){
			imp[i]= valor;
			cont++;
			
		}else if(valor<1000){
			valor = valor;
			
		}
		total+=valor;
		i++; 
	//printf("%i",jon[0]);	
	} 	
	printf("El monto total del dia es: $%i", total);
	printf("\n%i fueron el total de ventas mayores a 1000", cont);
	for(i = 0; i<cont; i++){
		fflush(stdin);
		//printf("\nLa factura N ")
		printf("\nLa factura[%d] tiene un valor de: $%i", imp[i], imp[i] );
		//printf("\nLas ventas mayores a mil son: $%i", imp[i]);
	}


	return 0;
}
