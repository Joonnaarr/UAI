#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Ciclo inexacto impredecible 
	int x =0;
	printf("Ingrese un valor para x"); scanf("%d",&x);
	while(x!=-1)
	{
	sentencias
	sentencias
	printf("Ingrese un valor para x"); scanf("%d",&x);
	}
*/
int main(int argc, char *argv[]) 
{
	
	printf("1 - Lee\n"); 
	printf("2 - Carga\n"); 
	printf("3 - Guarda\n"); 
	printf("4 - Lista\n"); 
	printf("5 - Modifica\n"); 
	printf("-1 - Sale\n"); 
		
	int opcion =-1;
	printf("\nIngrese una opcion "); scanf("%d",&opcion);
	while(opcion!=-1)
	{

	printf("\n Eligio la opcion %d ",opcion);
	switch(opcion)
	{
		case 1:
			printf("\n Lee");

			break;
		case 2:
			printf("\n Carga");

			break;
		case 3:
			printf("\n Guarda");
	
			break;
		
			
		case 4:
			printf("\n Lista");
			break;
		case 5:
			printf("\n Modifica");
			break;
		case -1:
			printf("\n El Usuario eligio SALIR");

			return 0;
			break;
		default:
			printf("\n Le erraste a la opcion");
			break;
	}
	system("pause");
	system("cls");
	printf("\n1 - Lee\n"); 
	printf("2 - Carga\n"); 
	printf("3 - Guarda\n"); 
	printf("4 - Lista\n"); 
	printf("5 - Modifica\n"); 
	printf("-1 - Sale\n"); 
	
	printf("\nIngrese un valor para opcion"); scanf("%d",&opcion);
	}
	printf("\n Salio del Ciclo Mientras");
	
	return 0;
}
