#include <stdio.h>
#include <stdlib.h>
#define f 3
#define c 3
#define tam 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int matriz[f][c]={0};
	int i=0, j=0;
	
	/*inicializo matriz
	for(i=0;i<tam+1;i++)
  		for(j=0;j<tam+1;j++)
                 matriz[i][j];
	*/
	
	for (i=0 ; i<f ; i++)
		for (j=0 ; j<c ; j++)
			 {
			 printf("Ingrese un numero: ");
			 scanf("%d",&matriz[i][j]);
			 }
	
	for (i=0 ; i<f ; i++)
			{
			for (j=0 ; j<c ; j++)
			printf("%3i " , matriz[i][j]);
			printf("\n");
}
	
	return 0;
}
