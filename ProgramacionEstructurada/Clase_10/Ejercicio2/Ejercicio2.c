#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int valor[10] = {0},primero=0,ultimo=0,valor2=0,metodo=0,i=0,valg=0,mitad=0 ;

int main(int argc, char *argv[]) {
	
	printf("Ingresar cantidad de valores a ingresar ");
	scanf("%d",&valg);
	
	for(i=0;i<valg;i++){
	
	printf("ingrese valor ");
	scanf("%d",&valor[i]);
}

	printf("1 metodo binario \n 2 metodo secuencial ");
	scanf("%d",&metodo);
	primero=0;
	ultimo=valg-1;
	switch(metodo){
		
		case 1:
	  printf("ingrese numero que desea buscar ");
		  scanf("%d",&valor2);
	do{
		mitad=(primero+ultimo)/2;
		
		if(valor[mitad]<=valor2){
			primero=mitad+1;
		}
		
		if(valor[mitad]>=valor2){
			ultimo=mitad-1;
		}
		
		
	}while(primero<=ultimo);
			printf("el valor %d esta en %d \n",valor[mitad],mitad);
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
