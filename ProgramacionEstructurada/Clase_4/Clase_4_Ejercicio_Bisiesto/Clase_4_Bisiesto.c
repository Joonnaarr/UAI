#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dia,mes,anio;
	do 
	{
	printf("Ingrese el dia: ");
	scanf("%d",&dia);
	}while(dia<1 || dia>31);
	
	do 
	{
	printf("Ingrese el mes: ");
	scanf("%d",&mes);
	}while(mes<1 || mes>12);
	
	do
	{printf("Ingrese el anio: ");
	scanf("%d", &anio);
	}while(anio <= 1900 || anio >= 3000);
	
	
	/*
	Meses de 30
	4, 6, 9, 11

	Meses de 31
	1,3,5,7,8,10,12
	
	Mes de 28 o 29
	2
	*/
	
	switch(mes)
	{
		case 2:
			if(dia>29)
			{
			printf("Fecha Erronea \n");
			break;
			}
			if(dia <= 29)
			{
				int bisi= anio % 400;  // Devuelve el resto
				if(bisi!=0)
				{
					bisi=anio % 4;
					int cien = anio % 100;
					if(bisi==0 && cien !=0)
					{
						printf("El anio es bisiesto\n");
					}
				}
				else
				{
						printf("El anio es bisiesto\n");
				}
				printf("Es una fecha Valida\n");	
				printf("No es bisiesto\n");
			}
			break;
			
			case 4: case 6: case 9: case 11:   // validar que el dia no supere los 30
			if(dia > 30)
				{
				printf("Fecha Erronea \n");
				break;
				}
			if(dia <= 30)
			{
				int bisi= anio % 400;  // Devuelve el resto
				if(bisi!=0)
				{
					bisi=anio % 4;
					int cien = anio % 100;
					if(bisi==0 && cien !=0)
					{
					printf("El anio es bisiesto\n");
					}
				}
				else
				{
				printf("El anio es bisiesto\n");
				}
				printf("Es una fecha Valida\n");
				printf("No es bisiesto\n");
				}
				break;
				
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if(dia <=31 )
			{
				int bisi= anio % 400;  // Devuelve el resto
				if(bisi!=0)
				{
					bisi=anio % 4;
					int cien = anio % 100;
					if(bisi==0 && cien !=0)
					{
					printf("El anio es bisiesto\n");
					}
				}
				else
				{
				printf("El anio es bisiesto\n");
				}
				printf("Es una fecha Valida\n");
				printf("No es bisiesto\n");
				}
				break;
	}
	return 0;
}
