#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void){
	int i, buscar, lista[100], mitad;
	bool flag=false;
	int a = 0;
	int b = 100;

	printf("Llenado del Vector\n\n");
	//se llena el vector
	for( i = 0; i <= 100; i++){
		lista[i] = rand() % 200;
	}

	int cuantos=1;
	//se muestra el vector sin ordenar

	for(i = 0; i <= 100; i++)
	{
		if(cuantos==10)
		{
			cuantos=1;
			printf("\n");
		}
		printf("%d ", lista[i]);
		cuantos++;
	}
	
	//Ordeno el vector
	int aux,j;
	for(i = 0; i <= 99; i++)
	{
		for(j=i+1;j<100;j++)
		{
			if(lista[i]>lista[j])
			{
				aux=lista[i];
				lista[i]=lista[j];
				lista[j]=aux;
			}
		}
	}	
	
	cuantos=1;
	//se muestra el vector ordenado
	
	printf("\n\nLista ordenada\n");
	for(i = 0; i <= 100; i++)
	{
		if(cuantos==10)
		{
			cuantos=1;
			printf("\n");
		}
		printf("%d ", lista[i]);
		cuantos++;
	}

	printf("\n\nComienza la secuencia\n");
	printf("Ingresa un numero a buscar: ");
	scanf("%d", &buscar);

	while (a <= b){
		mitad = (a + b) / 2;
		if(buscar > 200){
			printf("Numero no encontrado\n");
			break;
		}
		if(buscar == lista[mitad]){
			printf("\nNumero %d encontrado en posicion %d\n", lista[mitad], mitad);
			flag=true;
			break;
		}
		else if(buscar < lista[mitad]){
			b = mitad -1;
			printf("\nEl valor de la posición %d es Mayor %d \t a: %d \t\t b: %d",mitad, lista[mitad],a,b);
		}
		else{
			a = mitad + 1;
			printf("\nEl valor de la posición %d es Menor %d \t a: %d \t\t b: %d",mitad, lista[mitad],a,b);
		}
	}

	if(flag==false)
	{
		printf("Numero no encontrado\n");
	}

	return 0;

	

}
