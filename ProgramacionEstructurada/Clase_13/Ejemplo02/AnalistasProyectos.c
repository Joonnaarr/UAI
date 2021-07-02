#include <stdio.h>
#include <stdlib.h>
#define analistas 5
#define proyect 5


/*

Una consultora tiene 10 analistas y 15 proyectos en los que trabajan indistintamente, 
a fin de mes cada analista eleva una planilla con los siguientes datos

o	número de analista 
o	número de proyecto
o	cantidad de hs trabajadas

En memoria se debera cargar previamente el nombre de los analistas y el valor de la hora

se desea saber:
a.	cantidad de hs. trabajadas en total por cada analista.
b.	total de horas trabajadas por cada analista en cada proyecto.
c.	total de hs trabajadas sobre cada proyecto.
d.	que analista trabajó menos en el proyecto 1.
e.	sueldo de cada analista.
f.	nombre del analista que cobró más.
g.	cantidad de analistas que hayan trabajado menos de 5 hs en alguno de los proyectos.
h.	imprimir ordenado en forma descendente por sueldo de los analista:

-	nombre
-	valor de la hora
-	sueldo 

*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//a.	cantidad de hs. trabajadas en total por cada analista.

void cntHT(int MCH[analistas][proyect], char Nombres[analistas])
{
	int a,p,THT=0;
	
	for(a=1;a<analistas;a++)
	{
		THT=0;
		for(p=1;p<proyect;p++)
		{
			THT+=MCH[a][p];
		}
		if(THT>0)  //valida que haya trabajado en algo
		{
			printf("\nEl analista %d - %s trabajo %d horas en todos los proyectos ",a,Nombres[a]);
			printf("\nEl sueldo cobrado es de %d  ",VH[a]*THT);
			
		}
	}
	
}
//b.	total de horas trabajadas por cada analista en cada proyecto.

void cntHTP(int MCH[analistas][proyect], char Nombres[analistas])
{
	int a,p,THTP=0;
	
	for(a=1;a<analistas;a++)
	{
		THTP=0;
		for(p=1;p<proyect;p++)
		{
			if(MCH[a][p]>0)  //valida que haya trabajado en algo
			{
				printf("\nEl analista %d - %s trabajo %d horas en el proyecto %d ",a,Nombres[a],p);
			}
		}
	}
	
}

//c.	total de hs trabajadas sobre cada proyecto.

void cntHTP(int MCH[analistas][proyect])
{
	int a,p,THTP=0;
	
	for(p=1;p<proyect;p++)
	{
		THTP=0;
		for(a=1;a<analistas;a++)
		{
			if(MCH[a][p]>0)  //valida que haya trabajado en algo
			{
				THTP+=MCH[a][p];
			}
		}
		printf("\nEl proyecto  %d sumo  %d horas de trabajo ",p,THTP);
		THTP=0;
	}
	
}

//d.	que analista trabajó menos en el proyecto 1.

void ATM(int MCH[analistas][proyect], char Nombres[analistas])
{
	int a,p;
	int aaux=1, paux=1, haux=MCH[1][1]; //inicializo con un valor real
	for(p=1;p<proyect;p++)
	{
		//localiza el primer mínimo
		for(a=1;a<analistas;a++)
		{
			if(MCH[a][p]<haux)  //valida que haya trabajado en algo
			{
				haux=MCH[a][p];
				aaux=a;
				paux=p;
			}
			
			
		}
		//muestra los mínimos de todos los Analistas para ese proyecto
		for(a=1;a<analistas;a++)
		{
			if(MCH[a][p]==haux)  //valida que haya trabajado en algo
			{
				printf("\nEn el proyecto %d el Analista %d %s ",p,Nombres[a])
				printf(" fue el que trabajo menos horas %d",haux);
			}
		
		}
	}

	
}



void cargaHoras(int MCH[analistas][proyect])
{
	int cn,a,p,CH;
	do
	{
		printf("\nIngrese el numero de Analista ");scanf("%d",&a);
	}while(a<0 || a>analistas);
	
	while(a!=0)
	{
		do
		{
			printf("\nIngrese el numero de Proyecto ");scanf("%d",&p);
		}while(p<0 || p>proyect);
		
		printf("\nIngrese la cantidad de horas a cargar ");scanf("%d",&CH);
		
		MCH[a][p]+=CH;

		do
		{
			printf("\nIngrese el numero de Analista ");scanf("%d",&a);
		}while(a<0 || a>analistas);
	}	
	
}
//e.	sueldo de cada analista.
void CalculaSueldos(int MCH[analistas][proyect], int Sueldos[analistas])
{
	int a,p,THT=0;
	
	for(a=1;a<analistas;a++)
	{
		THT=0;
		for(p=1;p<proyect;p++)
		{
			THT+=MCH[a][p];
		}
		if(THT>0)  //valida que haya trabajado en algo
		{
			Sueldos[a]=THT;
			printf("\nEl analista %d - %s trabajo %d horas en todos los proyectos ",a,Nombres[a]);
			printf("\nEl sueldo cobrado es de %d  ",VH[a]*THT);
			
		}
	}
	
}

//f.	nombre del analista que cobró más.

void MostrarMS( int Sueldos[analistas], Nombres[analistas][20])
{
	int a,p,aaux=1,paux=1,saux=0;
	for(a=1;a<analistas;a++)
	{
		if(saux<Sueldos[a])
		{
			aaux=a;
			saux=Sueldos[a];
		}
	}
	for(a=aaux;a<analistas;a++)
	{
		if(saux==Sueldos[a])
		{
			printf("\nEl analista %d - %s tiene un total de %d horas trabajadas",a,Nombres[a],CHT);
			printf("\nSu sueldo es %d, es el mayor sueldo ",CHT*VH[a]);
		}
	}

}

int main(int argc, char *argv[]) 
{
	int Sueldos[analistas];
	char Nombres[analistas][20];
	float VH[analistas];
	int MCH[analistas][proyect];
	int cn,a,p;

	//cargo en memoria los nombres y el valor hora para cada uno
	for(cn=1;cn<analistas;cn++)
	{
		printf("\nIngrese el nombre del Analista %d ",cn);scanf("%s",&Nombres[cn]);
		printf("\nIngrese el valor de la Hora del Analista %d ",cn);scanf("%f",&VH[cn]);
	}
	
	cargaHoras(MCH);
	cntHT(MCH,Nombres);
	cntHTP(MCH,Nombres);
	ATM(MCH, Nombres);
	CalculaSueldos(MCH,Sueldos);
	MostrarMS(Sueldos,Nombres);

	return 0;
}
