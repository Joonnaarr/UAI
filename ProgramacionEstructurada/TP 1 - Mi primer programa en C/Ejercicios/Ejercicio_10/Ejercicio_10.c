#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int pagoVendedor = 500;
	int pagoPlus = 10;
	int valorConstante = 50;
	int valorAuto_10 = 10;
	int valorAuto; 
	int sueldo, sueldoTotal;
	
	printf("Ingrese el valor del auto vendido: ");
	scanf("%d", &valorAuto);
	
	sueldoTotal = (valorAuto / valorAuto_10) + sueldo + pagoPlus + pagoVendedor;
	
	printf("Pago vendedor: $%d \n" , pagoVendedor);
	printf("Pago % Plus auto vendido: $%d \n", (valorAuto / valorAuto_10));
	printf("Pago valor constante: $%d \n", valorConstante);
	printf("Su sueldo es: $%d \n", sueldoTotal);
	
	return 0;
}

