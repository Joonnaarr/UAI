#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]={0};
	int i=1;
	int b=1;
	
	for (i=1; i<=10;i++){
		printf("Ingrese el numero en la posicion %d: ", i);
		scanf("%d", &a[i]);
	}
	
	for (i=10; i>=1; i--){
		printf("%i ", a[i]);
	}
	
	return 0;
}
