#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int V[3]={0}, i, j;
int sumaV=0, prodV=0;

for (i=0; i<=3; i++){
	printf("Ingrese el numero de la posicion %d: ", i);
	scanf("%d", V[i]);
	sumaV+=V[i];
	prodV*=V[i];

}

for (i=0; j<=3; i++){
	printf("La suma es: %d\n", sumaV);
	printf("El producto es: %d\n", prodV);
	
}

return 0
}	


