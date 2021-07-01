#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <conio.h>

int main() {
    char nombre [100];
    char nombre2 [100];
    int aprobados = 7;
    int desaprobados = 4;
    int nota[10], i, contNombre, contNota, cargaAlumnos, listAlumnos, suma, notaAprob, notaDesa, promedio, nota7, nota46;
    
    printf("Ingrese la cantidad de alumnos a cargar: ");
    scanf("%d", &cargaAlumnos);
    
    for (i=1; i<=cargaAlumnos; i++){
		printf("Ingrese un nombre: ");
	    	scanf("%s[^\n]", &nombre[i]);
			fflush(stdin);
			//listAlumnos += nombre;
		do {
		printf("Ingrese su nota: ");
		scanf("%i", &nota[10]);
		suma += nota[10];
		} while (nota[10] <1 || nota[10] >10);
		
	if (nota[10] >= 7){
		notaAprob++;
		} 
	else if (nota[10] >=4 && nota[10] <=6) {
		notaDesa++;
		}
		
	}
	promedio = suma / cargaAlumnos;
	
	printf("El promedio total es: %d\n", promedio);
	printf("Cantidad de alumnos aprobados %d\n", notaAprob);
	printf("Cantidad de alumnos entre 4 y 6: %d", notaDesa);
	printf("Nombres: %s", nombre[i]);

return 0;
}


