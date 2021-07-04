#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*Ingresar 10 sueldos y edades de una empresa y calcular

1.	sueldo promedio*

2.	sueldo promedio de los empleados que tienen entre 23 y 40 años*

3.	edad promedio*

4.	cantidad de empleados mayores a 30 años y sueldo menor a $ 1000.*

5.	cantidad de empleados con edades menor a la edad promedio
*/

int sueldos[11], edades[11],i=1,contsueldo=0,contedad=0;
    int s2340 =0,contedad1=0,cant2=0; 
    float su2340=0.0, promedio=0.0,promedioSueldo=0.0,promedioSueldo2=0.0;
int main(int argc, char const *argv[])
{
    for(i=1;i<11;i++){
        
        printf("ingrese sueldo: ");
        scanf("%d",&sueldos[i]);
        
        printf("ingrese edad: ");
        scanf("%d",&edades[i]);
        
        contsueldo++;
        contedad++;

        sueldos[0]+=sueldos[i];
        edades[0]+=edades[i];
        if (edades[i]>=23 && edades[i]<=40)
        {
            s2340++;
            su2340+=edades[i];
        }
        if (edades[i]>30 && sueldos[i]<1000)
        {
            contedad1++;
        }
        
    }
    
    promedio=(float)edades[0]/contedad;
    promedioSueldo=(float)sueldos[0]/contsueldo;
    
    if(su2340 != 0){
    promedioSueldo2=(float)su2340/s2340;
    }else{su2340=0.0;}
    for(i=1;i<11;i++){
        
        if(edades[i]<promedio){
            
            cant2++;
            
        }
    }
        system("cls");
    printf("El sueldo promedio es: $%.2f",promedioSueldo);
    printf("\nLa edad promedio es: %.2f",promedio);
    printf("\nEl sueldo promedio de los trabajadores entre 23 y 40 es $%.2f",promedioSueldo2);
    printf("\nLa cantidad de empleados mayores a 30 anios y sueldo menor a $ 1000: %d ",contedad1);
    printf("\nLa cantidad de empleados con edades menor a la edad promedio es: %d ",cant2);
    getch();




    ///////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\n EJERCICIO 2");
	
	int verEj2[5];
	int ii=0;
	int op;
	int dato;
	int centro, inf=0,sup=4;
	
	for(ii=0,ii<=5;ii++){
	
		printf("\nIngrese un numero para la pos %d:",ii);
		scanf("%d",verEj2[ii]);
	
	}
	
	printf("\nElija un dato para buscar:");
	scanf("%d",dato);
	
	
	
	printf("\nElija la forma de ordenamiento: ");
	printf("\n\t1-Binaria");
	printf("\n\t2-Secuencial");
	scanf("%d",&op);
	
	
	switch(op){
		
		case 1: 
		        for(ii=0;ii<5;ii++)//secuencial
				{
	  				if(verEj2[ii]==dato)
					  {	  		
	  					printf("el dato bucado esta en la pos: %d",ii);
			  		
					  }
				}
				brack;
		
		case 2: //binario
			
			while(inf<=sup){
				centro=((sup-inf)/2)+inf;
				if(vecEj2[centro]==dato){
					printf("esta justo en el centro");
					
				}
				else if(dato < vecEj2[centro] ){
					sup=inf-1;
				}
				else{
					inf=sup+1;
				}
			}
			
				
	}


    return 0;
}
