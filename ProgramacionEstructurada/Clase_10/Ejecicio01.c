#include <stdio.h>

#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int i=0,aux,j=0,valg=0,valores[20] = {0};


int main(int argc, char *argv[]) {

	printf("ingrese la cantidad de valores a ingresar ");
	scanf("%d",&valg);
	system("cls");

	for(i=0;i<valg;i++){

		

		printf("ingrese valor: ");
		scanf("%d",&valores[i]);
	}

	for(i=0;i<valg;i++){

		for(j=i+1;j<valg;j++){

		if(valores[i]>valores[j]){
			aux = valores[i];
			valores[i]=valores[j];
			valores[j]=aux;
		}

		

		

		}

		

		

	}

	

	

	

	for(i=0;i<valg;i++){

		printf("\n valor: %d",valores[i]);

	}

	

	

	return 0;

}
