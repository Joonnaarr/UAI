#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) 

{
int Mesas= 3;
int Mozos= 3;
float Vmesas[3]={0.0}, Vmozos[3]={0.0};

	int MesaMozo[Mesas][Mozos];
	float MesaMozo_[Mesas][Mozos];
	int Me, Mo;

	//cargo las matrices

	for(Me=0;Me<Mesas;Me++)
	{
		for(Mo=0;Mo<Mozos;Mo++)
		{
			MesaMozo[Me][Mo]=0;
			MesaMozo_[Me][Mo]=0.0;
		}
	}
	for(Me=0;Me<Mesas;Me++)
	{
		for(Mo=0;Mo<Mozos;Mo++)
		{
		printf("\nMesa %d \t Mozo %d Valor %.2f",Me,Mo,MesaMozo_[Me][Mo]);
		}
	}

	for(Me=1;Me<=Mesas;Me++)
	{
		for(Mo=1;Mo<=Mozos;Mo++)
		{
			printf("\nPersonas para la Mesa %d y el Mozo %d ",Me,Mo);
			scanf("%d",&MesaMozo[Me][Mo]);
			printf("\nDinero para la Mesa %d y el Mozo %d ",Me,Mo);
			scanf("%f",&MesaMozo_[Me][Mo]);
		}
	}

	printf("\n\n\n");
	float importe= 0.0 ; 
	for(Me=1;Me<=Mesas;Me++)
	{
		for(Mo=1;Mo<=Mozos;Mo++)
		{
			importe +=MesaMozo_[Me][Mo];
		}
		Vmesas[Me]+=importe;
		importe=0.0;
	}
	importe=0.0;
	for(Mo=1;Mo<=Mozos;Mo++)
	{
		for(Me=1;Me<=Mesas;Me++)
		{
		importe +=MesaMozo_[Me][Mo];
		}
		Vmozos[Mo]+=importe;
		importe=0.0;
	}
	//Muestro los datos cargados de dinero en cada mesa
	for(Me=1;Me<=Mesas;Me++)
	{
		printf("\nMesa: %d \t Facturó: %.2f ",Me,Vmesas[Me]);
	}
	
	printf("\n\n\n");

	//Muestro los datos cargados de dinero por cada mozo

	for(Mo=1;Mo<=Mozos;Mo++)
	{
		printf("\nMozo: %d\t Facturo: %.2f ",Mo,Vmozos[Mo]);
	}
	return 0;

}
