#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int control,nota;
	char nombre[15];  //arreglo de caracteres
	char nombre[15];  //arreglo de caracteres
	int aplaz=0, aprob=0;
	for(control=0;control<N;control++)
	{
		printf("\nIngrese el nombre del Alumno "); scanf("%s",&nombre);
		printf("\nIngrese la nota "); scanf("%d",&nota);
		
		if(nota<4)
		{
			
		 printf("\nAPLAZADO %s tiene nota %d ",nombre,nota);
		 aplaz++;	
		}
		else
		{
		printf("\nAPROBADO %s tiene nota %d ",nombre,nota);	
		aprob++;	
		}
		
		
	}
	
	printf("\nTotal de Aprobados: %d",aprob);
	printf("\nTotal de Aplazados: %d",aplaz);
	printf("\nPorcentaje de Aprobados: %f",(float)aprob/(aprob+aplaz)*100);
	printf("\nPorcentaje de Aplazados: %f",(float)aplaz/(aprob+aplaz)*100);

	
	
	return 0;
}
