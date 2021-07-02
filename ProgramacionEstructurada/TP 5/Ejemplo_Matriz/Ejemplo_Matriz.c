#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][3]={};
    int i,j;
    for (i=1; i<3; i++) {
        for (j=1; j<3; j++) {
            printf("Ingrese un valor para la fila %i y la posicion %i ", i,j);
            scanf("%i",&a[i][j]);
            a[0][j]+=a[i][j];
            
        }
        
    }
    for (i=1; i<3; i++) {
        printf("%i ", a[0][i]);
    }
    return 0;
}