#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mes[12]={0}, i=0 ,j=0;
	int dias[31]={0};
	int a_mes=0, a_dias=0;
	
	
	for (i=1; i<=2; i++){
		printf("Ingrese el numero de mes: ");
		scanf("%d", &a_mes);
		mes[i]=a_mes;
		//mes[i]++;
			for (j=1; j<=1; j++){
				printf("Cuantos dias tiene el mes: ");
				scanf("%d", &a_dias);
				dias[j]+=a_dias;
				//dias[j]++;
			}
	}
	
	printf("Los datos ingresados son: \n");
	for (i=1; i<=2; i++){
		for(j=1; j<=1; j++){
			printf("%i, %i", mes[i],dias[j]);
			
		}
	}
	printf("\n\n");
	printf("%d, %d", mes[1],dias[1]);
	
	
	printf("\n");
	
	return 0;
}
