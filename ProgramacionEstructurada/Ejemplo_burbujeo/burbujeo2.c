#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[]={23,5,43,1,7,10};
	int aux;
	int i, j;
	//sin ordenar
	for(i=0;i<6;i++)
	{
		printf("\nPosición: %d \tValor:%d",i,numeros[i]);
	}
	//algoritmo de Burbujeo
	
	// Ciclo externo desde la posición 0 hasta N-1
	// Ciclo interno i+1 hasta N
	// SE COMPARA DE ACUERDO A LA CONSIGNA
	
	i=0;
	while(i<6)
	{
		for(j=i+1;j<6;j++)
		{
			if(numeros[i]>numeros[j])
			{
				aux=numeros[i];
				numeros[i]=numeros[j];
				numeros[j]=aux;
			}
		}
		i++;
	}
	//ordenado
	for(i=0;i<6;i++)
	{
		printf("\nPosición: %d \tValor:%d",i,numeros[i]);
	}




	return 0;
}
