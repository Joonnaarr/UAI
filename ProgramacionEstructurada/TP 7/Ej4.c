#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define ValHS 25

int main(){
//char nombres[6][30];
char empleados[6][30], nombres[30];
int Vlegajo[6]={0};
int i=0;

for (i=1; i<6; i++)
{
   printf("ingrese el Nombre del empleado:\n");
    fflush(stdin);
    gets(nombres);
	strcpy(empleados[i], nombres);

    printf("Ingrese el numero de legajo: ");
    scanf("%d", Vlegajo[i]);

    for(imes=1;imes<6;imes++){
        printf("\n\tIn")


    }
}







for (i=1; i<6; i++){
    printf("%s\n", empleados[i]);
}


return 0;
}
