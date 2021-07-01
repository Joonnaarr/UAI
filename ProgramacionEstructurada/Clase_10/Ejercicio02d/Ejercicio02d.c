#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int valor[10] = {0},j=0,flag=0,aux,primero=0,ultimo=0,valor2=0,metodo=0,i=0,valg=0,mitad=0 ;

int main(int argc, char *argv[]) {


	
	printf("Ingresar cantidad de valores a ingresar ");
	scanf("%d",&valg);

system("cls");	
	for(i=0;i<valg;i++){
	
	printf("ingrese valor ");
	scanf("%d",&valor[i]);
	

	
	
}


for(i=0;i<valg;i++){
		for(j=i+1;j<valg;j++){
		
		
		if(valor[i]>valor[j]){
			aux = valor[i];
			valor[i]=valor[j];
			valor[j]=aux;
			
			
		}
		
		
		}
	
}

system("cls");

	printf("\nOrdenamiento\n");
	for(i=0;i<valg;i++){
		
		printf("\n\n %d: valor %d",i,valor[i]);
	}

	printf("\n\n 1 metodo binario \n 2 metodo secuencial ");
	scanf("%d",&metodo);
	
	
	primero=0;
	ultimo=valg-1;
	switch(metodo){
		
		case 1:
	  printf("ingrese numero que desea buscar ");
		  scanf("%d",&valor2);
	do{
		
		
		mitad=(primero+ultimo)/2;
		
		
				if(valor2 == valor[mitad]){

			printf("\nNumero %d encontrado en posicion %d\n", valor[mitad], mitad);

			flag=1;

			break;

		}
		
		if(valor2<valor[mitad]){
			ultimo=mitad-1;
			printf("\nEl valor de la posición %d es Mayor %d \t primero: %d \t\t ultimo: %d",mitad, valor[mitad],primero,ultimo);
		}
		
		if(valor2>valor[mitad]){
			primero=mitad+1;
			
			printf("\nEl valor de la posición %d es Menor %d \t primero: %d \t\t ultimo: %d",mitad, valor[mitad],primero,ultimo);
		}
		
		
	}while(primero<=ultimo);
			
			if(flag==0)

	{

		printf("Numero no encontrado\n");

	}
			
			break;
			
			
		case 2: 
		
		  printf("ingrese numero que desea buscar ");
		  scanf("%d",&valor2);
		  
		  for(i=0;i<valg;i++){
		  	
		  	if(valor2==valor[i]){
		  		
		  	    printf("la posicion es: %d y el numero es: %d",i,valor[i]);
		  		
			  }
			
		  	
		  }
		
	       	
		   break;	
		
		
		
	}

getch();

	return 0;
}
