/* 
    SUMO EN LOS EXTREMOS DE UNA MATRIZ EL TOTAL DE CADA FILA Y 
    CADA COLUMNA 
*/
#include <stdio.h>
#include <conio.h>
#define TAM 3

int main(void)
{
int matriz[TAM+1][TAM+1],i,j;

//clrscr();

 // INICIALIZO
 for(i=0;i<TAM+1;i++)
  for(j=0;j<TAM+1;j++)
                 matriz[i][j] = 0;

// INGRESO LOS DATOS 
 for(i=0;i<TAM;i++)
 {
  for(j=0;j<TAM;j++)
  {
   printf("Ingresar dato entero en (fila[%d] columna[%d]):",i,j);
   scanf("%d",&matriz[i][j]);
  }
  printf("\n");
 }

 // MUESTRO LOS DATOS QUE INGRESE EN LA MATRIZ
 for(i=0;i<TAM;i++)
 {
  for(j=0;j<TAM;j++)
   printf("%d\t",matriz[i][j]);

  printf("\n");
 }

 // ACUMULO EN LA ULTIMA POSICION DE LA MATRIZ
 for(i=0;i<TAM;i++)
 {
  for(j=0;j<TAM;j++)
  {
   matriz[i][TAM]+= matriz[i][j];
   matriz[TAM][j]+= matriz[i][j];
  }
 }
 printf("\n");

 // MUESTRO LAS SUMAS
 for(i=0;i<TAM+1;i++)
        {
  for(j=0;j<TAM+1;j++)
   printf("%d\t",matriz[i][j]);
   printf("\n");
        }
        getch();
}
