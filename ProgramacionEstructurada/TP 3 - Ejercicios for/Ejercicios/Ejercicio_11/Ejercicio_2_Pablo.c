#include <stdio.h>
#include <stdlib.h>
//Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y cuantas superan los $1000.imprimir los resultados

int main(){
	int factura=5, suma=0, mayor[5],total[5],cont=0,i=0,posicion[5],cont1, contMayorMil=0, contMenorMil=0;
	for(factura=5;factura>0;factura--){
		printf("Ingrese el valor: $"); scanf("%i",&total[i]);
		suma+=total[i];
		
		if(total[i]>1000){
			mayor[i]=total[i];
			//posicion[i]=factura;
			contMayorMil++;
		}
		else if(total[i]<1000){
			contMenorMil++;
		}
		
		i++;
	}
		printf("%i if\n",contMayorMil);
		printf("%i else if\n", contMenorMil);
		printf("%i Total de veces\n",i);
	printf("La suma total de los importes es de: $%i\n",suma);
	for(i=0;i<contMayorMil;i++){
		printf("La factura numero tiene un valor de: $%i \n",mayor[i]);
	}

	return 0;
}
