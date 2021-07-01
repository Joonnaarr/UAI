#include <stdio.h>
#include <stdlib.h>
#define N 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int V[3]={0}, v_pares[3];
int i=0, j=0, n_pares=0, pares=0, impares=0;
int sumaV=0, prodV=0;

for (i=0; i<=3; i++){
	printf("Ingrese el numero de la posicion %d: ", i);
	scanf("%d", &V[i]);
	sumaV+=V[i];
	prodV=sumaV*N;

}

	printf("La suma es: %d\n", sumaV);
	printf("El producto es: %d\n", prodV);
	printf("El vector ingresado es: \n");
	for (i<=3; i>=0; i--){
		printf("%i   ", V[i]);
	}


    for (i=0;i<=3;i+=1) {
        if (V[i]%2==0) {
            v_pares[i]=V[i];

        } else {
            impares = impares+1;
        }
    }
    
    for (i=0; i<=3; i++){
		printf("\nVector con numeros par : %d",v_pares[i]);
	}


	
	return 0;
}
