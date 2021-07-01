#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
	{ 
          char nombre[20] = "Jose"; //string de max 20 caracteres inicializada
          char apellido[20] = "Perez"; 
          
          //strcpy, copia una cadena a otra
          strcpy(nombre, apellido); //Lo que hay en apellido se copia a nombre
          printf("Cadena copiada: %s \n", nombre);
          
          //strcat concatena dos cadenas
          strcat(nombre, " "); //concateno con un espacio en blanco
          strcat(nombre, apellido); //le añado la cadena apellido
          printf("Cadena concatenada: %s \n", nombre);                           
          	  
    	  system("PAUSE");
	}
