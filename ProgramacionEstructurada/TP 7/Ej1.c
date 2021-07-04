#include <stdlib.h>
#include <stdio.h>

// Ingrese 20 valores en un vector e imprimalo ordenado utilizando el algoritmo bubblesort u ordenamiento por burbujeo.

int main(){
int iVector[6]={0};
int i=0;
int j=0;
int aux=0;

for (i=1; i<=5; i++)
{
    printf("Ingrese un numero en la posicion %d: ", i);
    scanf("%d", &iVector[i]);
}

for (i=1; i<=5; i++)
{
    for (j=1; j<=5; j++)
    {
        if (iVector[j]>iVector[j+1])
        {
            aux=iVector[j];
            iVector[j]=iVector[j+1];
            iVector[j+1]=aux;
        }
    }
}

for (i=1; i<=5; i++){
    printf("\n\t\t%d", iVector[i]);
}
    return 0;
}

   