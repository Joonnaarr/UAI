#include <stdio.h>
#include <stdlib.h>
#define oro 30000
#define billetes 25000
#define piedras 20000
#define docs 15000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int codCliente, nCamion, cantTrasladar=0, cantOro=0, tipoValor=0, importe=0;
	int swOro=0, swBilletes=0, swPiedras=0, swDocs=0;
	int contOro=0, contBilletes=0, contPiedras=0, contDocs=0;
	int contC1=0,contC2=0,contC3=0,contC4=0,contC5=0,contC6=0,contC7=0,contC8=0;
	int cantTrC1=0,cantTrC2=0,cantTrC3=0,cantTrC4=0,cantTrC5=0,cantTrC6=0,cantTrC7=0,cantTrC8=0;
	int trasporteMin=0, trasporteBand=0, cantMin=0, clienteMin=0;
	int recauO=0, recauB=0, recauP=0, recauD=0;
	int recauC1=0,recauC2=0,recauC3=0,recauC4=0, recauC5=0, recauC6=0, recauC7=0, recauC8=0, recauTot=0;
	
	system("cls");
	printf("Ingrese el numero de cliente: "); scanf("%d", &codCliente);
	
while (codCliente!=0){
	
	system("cls");
	printf("Cantidad a trasladar en KG: "); scanf("%d", &cantTrasladar);
	if (trasporteBand == 0){ 
		trasporteBand = cantTrasladar;
		cantMin = cantTrasladar;
		clienteMin = codCliente;
		}
	else if (cantTrasladar < trasporteBand){ 
		cantMin = cantTrasladar;
		clienteMin = codCliente;
		}
	
	system("cls");
	do {
	printf("Ingrese el numero de camion [1-8]: "); scanf("%d", &nCamion);
	}while (nCamion<0 || nCamion>8);
	
	system("cls");
	printf("1 - Oro");printf("\n2 - Billetes");printf("\n3 - Piedras Preciosas");printf("\n4 - Documentos");
	printf("\nIngrese el tipo de valor: ");
	scanf("%d", &tipoValor);
	
	system("cls");
	
	switch(nCamion){
		case 1:
			contC1++;
				switch(tipoValor){
					case 1: 
						contOro++; 
						swOro+=oro; 
						recauO+=swOro; 
						importe=swOro; 
						cantOro+=cantTrasladar; 
						recauC1+=oro;
						break;
					case 2: 
						swBilletes+=billetes; 
						recauB+=swBilletes; 
						importe=swBilletes; 
						recauC1+=billetes;
						contBilletes++; 
						break;
					case 3: 
						swPiedras+=piedras; 
						recauP+=swPiedras; 
						importe=swPiedras; 
						recauC1+=piedras;
						contPiedras++; 
						break;
					case 4: 
						swDocs+=docs; 
						recauD+=swDocs; 
						importe=swDocs; 
						recauC1+=docs;
						contDocs++; 
						break;}	
					break;
		case 2:
			contC2++;
				switch(tipoValor){
					case 1: 
						contOro++; 
						swOro+=oro; 
						recauO+=swOro; 
						importe=swOro; 
						cantOro+=cantTrasladar; 
						recauC2+=oro;
						break;
					case 2: 
						swBilletes+=billetes; 
						recauB+=swBilletes; 
						importe=swBilletes; 
						recauC2+=billetes;
						contBilletes++; 
						break;
					case 3: 
						swPiedras+=piedras; 
						recauP+=swPiedras; 
						importe=swPiedras; 
						recauC3+=piedras;
						contPiedras++; 
						break;
					case 4: 
						swDocs+=docs; 
						recauD+=swDocs; 
						importe=swDocs; 
						recauC+=docs;
						contDocs++; 
						break;}	
				break;
		case 3:
			contC3++;
					switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							cantOro+=cantTrasladar; 
							recauC3+=oro;
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC3+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC3+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC3+=docs;
							contDocs++; 
							break;}	
			break;
		case 4:
			contC4++;
			switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							recauC4+=oro;
							cantOro+=cantTrasladar; 
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC4+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC4+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC4+=docs;
							contDocs++; 
							break;}	
			break;
		case 5:
			contC5++;
			switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							recauC5+=oro;
							cantOro+=cantTrasladar; 
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC5+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC5+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC5+=docs;
							contDocs++; 
							break;}	
			break;
		case 6:
			contC6++;
			switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							recauC6+=oro;
							cantOro+=cantTrasladar; 
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC6+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC6+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC6+=docs;
							contDocs++; 
							break;}	
			break;
		case 7:
			contC7++;
			switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							recauC7+=oro;
							cantOro+=cantTrasladar; 
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC7+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC7+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC7+=docs;
							contDocs++; 
							break;}	
			break;
		case 8:
			contC8++;
			switch(tipoValor){
					case 1: 
							contOro++; 
							swOro+=oro; 
							recauO+=swOro; 
							importe=swOro; 
							recauC8+=oro;
							cantOro+=cantTrasladar; 
							break;
					case 2: 
							swBilletes+=billetes; 
							recauB+=swBilletes; 
							importe=swBilletes; 
							recauC8+=billetes;
							contBilletes++; 
							break;
					case 3: 
							swPiedras+=piedras; 
							recauP+=swPiedras; 
							importe=swPiedras; 
							recauC8+=piedras;
							contPiedras++; 
							break;
					case 4: 
							swDocs+=docs; 
							recauD+=swDocs; 
							importe=swDocs; 
							recauC8+=docs;
							contDocs++; 
							break;}	
			break;}
	
	system("cls");
	printf("Ingrese el numero de cliente: "); scanf("%d", &codCliente);
	
}

	recauTot=(recauO+recauP+recauB+recauD);

	printf("\nCantidad de viajes Camion 1: %d", contC1);printf("\nCantidad de viajes Camion 2: %d", contC2);
	printf("\nCantidad de viajes Camion 3: %d", contC3);printf("\nCantidad de viajes Camion 4: %d", contC4);
	printf("\nCantidad de viajes Camion 5: %d", contC5);printf("\nCantidad de viajes Camion 6: %d", contC6);
	printf("\nCantidad de viajes Camion 7: %d", contC7);printf("\nCantidad de viajes Camion 8: %d\n", contC8);
	printf("\nTotal trasportado de Oro: %d\n", cantOro);
	printf("\nTotal recaudado Oro $%d", swOro);printf("\nTotal recaudado Billetes $%d", swBilletes);
	printf("\nTotal recaudado Piedras Preciosas $%d", swPiedras); printf("\nTotal recaudado Documentos $%d\n", swDocs);
	
	printf("\nEl cliente %d realizo menos viajes, llevando un total de %d KG\n" ,clienteMin, cantMin); 
	
	printf("\nPorcentual del camion 1: %d %", (recauC1*100)/recauTot);
	printf("\nPorcentual del camion 2: %d %", (recauC2*100)/recauTot);
	printf("\nPorcentual del camion 3: %d %", (recauC3*100)/recauTot);
	printf("\nPorcentual del camion 4: %d %", (recauC4*100)/recauTot);
	printf("\nPorcentual del camion 5: %d %", (recauC5*100)/recauTot);
	printf("\nPorcentual del camion 6: %d %", (recauC6*100)/recauTot);
	printf("\nPorcentual del camion 7: %d %", (recauC7*100)/recauTot);
	printf("\nPorcentual del camion 8: %d %\n", (recauC8*100)/recauTot);
	printf("\nPromedio de Oro: %.2f",(float)(recauO*100)/recauTot);
	printf("\nPromedio de Billetes: %.2f", (float)(recauB*100)/recauTot);
	printf("\nPromedio de Piedras: %.2f",(float)(recauP*100)/recauTot);
	printf("\nPromedio de Documentos: %.2f",(float)(recauD*100)/recauTot);
	

	return 0;
}
