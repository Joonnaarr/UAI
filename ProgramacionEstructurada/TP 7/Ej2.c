 /////////////////////////////////////////////////////////////////////////////
 #include <stdlib.h>
 #include <stdio.h>
 
 int main(){
   printf("\n EJERCICIO 2");
	
	int verEj2[5]={0};
	int ii=0, j=0;
	int op;
	int dato;
    int aux=0;
	int centro, inf=0, sup=4;
	
	for(ii=0;ii<=5;ii++)
        {
            printf("\nIngrese un numero para la pos %d:",ii);
            scanf("%d",&verEj2[ii]);
	    }
	
	printf("\nElija un dato para buscar:");
	scanf("%d",&dato);

    for (ii=1; ii<=5; ii++)
{
    for (j=1; j<=5; j++)
    {
        if (verEj2[j]>verEj2[j+1])
        {
            aux=verEj2[j];
            verEj2[j]=verEj2[j+1];
            verEj2[j+1]=aux;
        }
    }
}

	printf("\nElija la forma de ordenamiento: ");
	printf("\n\t1-Secuencial");
	printf("\n\t2-Binaria");
	scanf("%d",&op);
	
	switch(op)
    {
			case 1: 
		        for(ii=0;ii<5;ii++)//secuencial
				{
	  				if(verEj2[ii]==dato)
					  {	  		
	  					printf("el dato bucado esta en la pos: %d",ii);
			  		
					  }
                    
				}
				break;
		
		case 2: //binario
			
			while(inf<=sup)
            {
				centro=(int)((sup-inf)/2);
				if(verEj2[centro]==dato)
                {
					printf("esta justo en el centro");
				}
				else if(dato < verEj2[centro] )
                {
					sup=inf-1;
				}
				else
                {
					inf=sup+1;
            
				}

                if(centro)
                    printf("\n El dato se encuentra en la posicion: %d ", centro+1);
                else
                    printf("\n El dato no se encontro");    
			}
			
				
	}
return 0;
 }


 	int iVlgajo[10]={0}, cantHS=0,valorHS=0,iVmes[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	char cVEmpleado[10], nombre[20];
	int i=0 ii=0,m=0;
	float fSueldoMensual=0, fVSueldoAnual[10]=0,fSueldoAnual=0,fVmaxSuelMes[11]={0},maxsuel=0;
	float fSueldoMensualMax=0;
	char nombreMax[20];
	int contSueldo[12]={0};
	
	
	for(i=0;i<=10;i++){
		
		printf("ingrese el Nombre del empleado:\n");
		fflush(stdin);
		cVEmpleado[i]=gets(nombre);
		
		
		
		for(m=0;m<=11;m++){
			int f1=0;
			print("Ingrese el numero de horas trabajadas del mes %d: \n",i+1);
			scanf("%d",&cantHS);
			printf("Ingrese el valor de la hora de trabajo:\n");
			scanf("%d",&valorHS);
			fSueldoMensual=cantHS*valorHS;
			fSueldoAnual+=fSueldoMensual;
			if(f1=0){
				
			}
			contSueldo[m]=contSueldo+=fSueldoMensual;
			fVSueldoAnual[i]=fSueldoAnual;
		}
					
		for(ii=0;ii<=10;ii++){
			
		}
		
	}
	
	for(i=0;i<=10;i++){
		printf("\nEl sueldo anual del empleado %c es de: %d",cVEmpleado[i],fVSueldoAnual[i]);
	}
	
	for(m=0;m<=11;m++){
		printf("\nTotal de sueldos pagados del mes %d: %d",m,contSueldo[m]);
	}
	