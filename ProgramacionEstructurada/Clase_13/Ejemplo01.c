#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{


	int matriz [3][4] = { {10,20,30,110},
							{40,50,60,101},
							{70,80,90,100} }
	
	
	int auCas[4][5]={{0,0,0,0},
					{123,45,33,55},
					{43,1,0,35},
					{22,10,65,90},
					{2,3,80,43}}
	
	int autop[4][5];
	
	printf("\n Autopistas 1 a 3");
	printf("\n Casillas 1 a 4");
	do
	{
		printf("\nIngrese el Nro. de Autopista (0-sale)";  scanf("%d", &aut);
	}while(aut<0 || aut > 3);
	int casi,canti;
	while(aut!=0)
	{
		do
		{
			printf("\nIngrese el Nro. de Casilla (1 a 4)";  scanf("%d", &casi);
		}while(casi<0 || casi > 4);
		
		printf("\n ingrese la cantidad de Vehiculos "), scanf("%d ",&canti);
		autop[aut][casi]+=canti;
		system("cls");
		printf("\n Autopistas 1 a 3");
		printf("\n Casillas 1 a 4");
		do
		{
			printf("\nIngrese el Nro. de Autopista (0-sale)";  scanf("%d", &aut);
		}while(aut<0 || aut > 3);
		
	}	
	
	
	//la suma de vehiculos por autopista
	int au,cas;
	for(au=1;au<=3;au++)
	{
		int tau=0;
		for(cas=1;cas<=4;cas++)
		{
			tau+=auCas[au][cas];
		}
		printf("\nEn la Autopista %d transitaron %d vehiculos",au,tau);
		tau=0;
	}
	
	//Total de Vehiculos por casilla
	for(cas=1;cas<=4;cas++)
	{
		int tau=0;
		for(au=1;au<=3;au++)
		{
			tau+=auCas[au][cas];
		}
		printf("\nLas suma de Vehiculos de la Casilla %d de todas las Au  es %d ",cas,tau);
		tau=0;
	}
	int auaux=1, casaux=1, cantV=auCas[1][1];
	// En que Autopista y en que casilla pasaron mas vehiculos
	for(au=1;au<=3;au++)
	{
		for(cas=1;cas<=4;cas++)
		{
/*			if(au==1 && cas==1)
			{
				auaux=1,
				casaux=1;
				cantV=auCas[1][1];
			}
			*/
			if(cantV<auCas[au][cas])
			{
				auaux=au,
				casaux=cas;
				cantV=auCas[au][cas];
			}
		}
		
		//segunda pasada voy a ver los máximos que engo en la matriz
	for(au=auaux;au<=3;au++)
	{
		for(cas=casaux;cas<=4;cas++)
		{
			if(cantV==auCas[au][cas])
			{
				printf("\nEn la posicion %d %d tenemos un maximo de valor %d",au, cas,cantV);
			}
		}
	}
	
	int VehT=0;
	//cantidad de vehiculos en todas las Autopistas
	for(au=auaux;au<=3;au++)
	{
		for(cas=casaux;cas<=4;cas++)
		{
			
				VehT+=auCas[au][cas];	
			
		}
	}
	
	printf("\nPasaron un Total de  %d Vehiculos " ,VehT);
	
	return 0;
}
