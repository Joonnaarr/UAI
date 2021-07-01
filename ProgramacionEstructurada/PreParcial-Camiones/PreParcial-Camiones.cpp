#include <stdio.h>
#include <stdlib.h>

#define Oro 30000
#define Billetes 25000
#define Piedras 20000
#define Documentos 15000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroCliente, numeroCamion, tipoValor, cantidad; //datos de entrada
	int contCamion1=0, contCamion2=0, contCamion3=0, contCamion4=0, contCamion5=0, contCamion6=0, contCamion7=0, contCamion8=0;
	int cargaOroC1=0, cargaOroC2=0, cargaOroC3=0, cargaOroC4=0, cargaOroC5=0, cargaOroC6=0, cargaOroC7=0, cargaOroC8=0;
	int recuaTot=0, recauOro=0, recauTosca=0, recauPiedras=0, recauDoc=0;
	int cantMin=0, clienteMin=0;
	int porcentual=0, promedio=0;

	do{
		
	printf("Ingrese el numero de cliente: ");
	scanf("%d",&numeroCliente);
	
	}while(numeroCliente < 0);

while(numeroCliente=!0){
	
	do{
	
	printf("\ningrese el numero de camion: ");
	scanf("%d",&numeroCamion);
	
	}while(numeroCamion<1 || numeroCamion>8);
	
	do{
	
	printf("\ningrese el tipo de valor: \n\n\n\t1-Oro\n\n\n\t2-Billetes\n\n\n\t3-Piedras presiosas\n\n\n\t4-Documentos");
	scanf("%d",&tipoValor);
	
	}while(numeroCamion<1 || numeroCamion>4);
	
	do{
	
	printf("\ningrese la cantidad a trasladar: ");
	scanf("%d",&cantidad);
	
	}while(cantidad<0);
	
	if(cantMin==0){ //primer ingreso
		cantMin=cantidad;
		clienteMin=numeroCliente;
	}
	
	if(cantidad<cantMin){
		cantMin=cantidad;
		clienteMin=numeroCliente;
	}
	
	switch(numeroCamion){
		
		case 1:
				contCamion1++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC1+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
							
				}
		case 2:
				contCamion2++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC2+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
									
							
				}
		
		case 3:
				contCamion3++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC3+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}
							
		case 4: 
				contCamion4++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC4+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}
		
		case 5:
				contCamion5++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC5+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}		
		case 6:
				contCamion6++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC6+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}
						
						
		case 7:
				contCamion7++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC7+=cantidad;
							break;
						
						case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}
						
		case 8:
				contCamion8++;
				switch(tipoValor){
					
						case 1:
							recauOro+=Oro;
							cargaOroC8+=cantidad;
							break;
						
							case 2:
							recauTosca+=Billetes;
							break;
							
						case 3:
							recauPiedras+=Piedras;
							break;
							
						case 4:
							recauDoc+=Documentos;
							break;
						}
				break;

	printf("\nIngrese codigo cliente:");
	scanf("%d",&numeroCliente);
}

	
	printf("Cantidad de viajes realizados: \n\n\n\tCamion1:%d\n\n\n\tCamion2:%d\n\n\n\tCamion3:%d\n\n\n\tCamion4:%d\n\n\n\tCamion5:%d\n\n\n\tCamion6:%d\n\n\n\tCamion7:%d\n\n\n\tCamion8:%d",contCamion1,contCamion2,contCamion3,contCamion4,contCamion5,contCamion6,contCamion7,contCamion8);
	
	
	}
	return 0;
}
