#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char cadena[200];
	int i = 0;
	printf("Introduce una cadena de texto: ");
	gets(cadena);
	printf("\nLa cadena introducida es: %s", cadena);
	printf("\nLa cadena al reves es: ");
	for (i=strlen(cadena); i>=0; i--){
		printf("%c", cadena[i]);
	}
	return 0;
}
