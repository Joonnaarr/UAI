#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


/*                                                                                                  
        (         (  (  (       )     )       )  
 `  )   )(    (   )\))( )(   ( /(    (     ( /(  
 /(/(  (()\   )\ (())\(()\  )())   )\  ' )(_)) 
(()\  (() (() (()()(()(()  (()) (()  
| '_ \)| '|/ _ \/ _` || '|/ _` || '  \()/ _` | 
| ._/ ||  \__/\, |||  \_,||||| \,| 
||              |__/                           
*/

int sueldos[11], edades[11],i=1,contsueldo=0,contedad=0;
    char nombre[10][40],nombre2[10][40];
    int s2340 =0,contedad1=0,cant2=0; 
    float su2340=0.0, promedio=0.0,promedioSueldo=0.0,promedioSueldo2=0.0;
    int max=0,maxSueldo=0,min=0,pos1=0,pos2=0,contmin=0,contmax=0,hola=0,hola2=0;
     int flagS=1;

int main(int argc, char const *argv[])
{
    for(i=1;i<5;i++){
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombre[i]);
        fflush(stdin);
        printf("Ingrese sueldo: ");
        scanf("%d",&sueldos[i]);
        
        printf("Ingrese edad: ");
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
       
        if(flagS==1){
            min=sueldos[i];
            max=sueldos[i];
            flagS=0;
        }
        if(max<sueldos[i]){
            max=sueldos[i];
            pos1=i;
            
      
            
        }
        if(min>sueldos[i]){
            min=sueldos[i];
            pos2=i;
          
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
    
    hola  = contmin=11-pos2;
     hola2 = contmax=11-pos2;
    system("cls");
    printf("El sueldo promedio es: $%.2f",promedioSueldo);
    printf("\nLa edad promedio es: %.2f",promedio);
    printf("\nEl sueldo promedio de los trabajadores entre 23 y 40 es $%.2f",promedioSueldo2);
    printf("\nLa cantidad de empleados mayores a 30 anios y sueldo menor a $ 1000: %d ",contedad1);
    printf("\nLa cantidad de empleados con edades menor a la edad promedio es: %d ",cant2);
    for(i=1;i<11;i++){
        printf("\nEmpleado: %s sueldo: %d  edad: %d ",nombre[i],sueldos[i],edades[i]);
    }

    printf("\n\nIngrese el nombre del empleado: ");
        fflush(stdin);
        gets(nombre2);
        fflush(stdin);
    int esta=1;
    for(i=1;i<5;i++){

        if(strcmp(nombre2,nombre[i])==0){
            system("color 02");
            printf("\nEl empleado que se busco es: %s sueldo: %d  edad: %d ",nombre[i],sueldos[i],edades[i]);
            esta=0;
        }
    }
    if (esta==1){
            printf("404 not found");
        }

    for ( i = pos1 ; i<11; i++){
        if (sueldos[i]==max)
        {
         
            printf("\nEl empleado mayor es %s tiene sueldo maximo es:%d",nombre[i],max);
        }
    }
    for ( i = pos2 ; i<11; i++){
        if (sueldos[i]==min)
        {
        
            printf("\nEl empleado menor es %s tiene sueldo minimo es:%d",nombre[i],min);
        }
        
    }


    getch();
    return 0;
}
