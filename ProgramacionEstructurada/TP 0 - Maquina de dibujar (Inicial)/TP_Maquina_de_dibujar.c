#include <stdio.h>  
#include <stdlib.h>
#include <Windows.h> // API del Sistema Operativo de Windows (Permite trabajar sobre la Consola).

void Color(int Background, int Text); // Prototipo de función  
enum Colors { // Listado de colores (La letra "L" al inicio, indica que es un color más claro que su antecesor).

 BLACK = 0,
 BLUE = 1,
 GREEN = 2,
 CYAN = 3,
 RED = 4,
 MAGENTA = 5,
 BROWN = 6,
 LGREY = 7,
 DGREY = 8,
 LBLUE = 9,
 LGREEN = 10,
 LCYAN = 11,
 LRED = 12,
 LMAGENTA = 13,
 YELLOW = 14,
 WHITE = 15

};

 void gotoxy(int x,int y){  
   HANDLE hcon;  
   hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
   COORD dwPos;  
   dwPos.X = x;  
   dwPos.Y= y; 
   SetConsoleCursorPosition(hcon,dwPos);  
 }  

 void Color(int Background, int Text)
 { // Función para cambiar el color del fondo y/o pantalla

 HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE); // Tomamos la consola.

 // Para cambiar el color, se utilizan números desde el 0 hasta el 255.
 // Pero, para convertir los colores a un valor adecuado, se realiza el siguiente cálculo.

 int  New_Color= Text + (Background * 16);
 SetConsoleTextAttribute(Console, New_Color); // Guardamos los cambios en la Consola.

}

 int main()
 {  
 	int f=0, c=0;
 	char bloque = 178;
 	char A = 65;
 	system("color 04");
 	gotoxy(c,f);  
	printf("%c", bloque);  

// Inicio letra H
f++;
  	gotoxy(c,f);  
  	printf("%c", bloque); 
f++; gotoxy(c+4,f-2);  
  	printf("%c", bloque); 
f++; gotoxy(c+4,f-2);  
  	printf("%c", bloque);   	
f++; gotoxy(c+3,f-2);  
  	printf("%c", bloque);   	
f++; gotoxy(c+2,f-3);  
  	printf("%c", bloque);   	
f++; gotoxy(c+1,f-4);  
  	printf("%c", bloque);   	
f++; gotoxy(c+0,f-5);  
  	printf("%c", bloque);   	
f++; gotoxy(c+4,f-6);  
  	printf("%c", bloque);
f++; gotoxy(c+0,f-6);  
  	printf("%c", bloque);   	
f++; gotoxy(c+0,f-4);  
  	printf("%c", bloque);   	
f++; gotoxy(c+0,f-7);  
  	printf("%c", bloque);   	
f++; gotoxy(c+4,f-8);  
  	printf("%c", bloque);   	
f++; gotoxy(c+4,f-10);  
  	printf("%c", bloque);   	
// Fin letra H

// Inicio letra O

f++; gotoxy(c+6,f-10);
	Color(BLACK, LBLUE); 
  	printf("%c", bloque);
f++; gotoxy(c+6,f-12);
  	printf("%c", bloque);
f++; gotoxy(c+6,f-14);
  	printf("%c", bloque);
f++; gotoxy(c+6,f-16);
  	printf("%c", bloque);
f++; gotoxy(c+6,f-18);
  	printf("%c", bloque);
f++; gotoxy(c+7,f-20);
  	printf("%c", bloque);
f++; gotoxy(c+8,f-20);
  	printf("%c", bloque);
f++; gotoxy(c+9,f-22 );
  	printf("%c", bloque);
f++; gotoxy(c+9,f-21 );
  	printf("%c", bloque);
f++; gotoxy(c+9,f-22 );
  	printf("%c", bloque);
f++; gotoxy(c+9,f-20 );
  	printf("%c", bloque);
f++; gotoxy(c+9,f-23);
  	printf("%c", bloque);
f++; gotoxy(c+9,f-23);
  	printf("%c", bloque);
f++; gotoxy(c+8,f-23);
  	printf("%c", bloque);
f++; gotoxy(c+7,f-24);
  	printf("%c", bloque);
// Fin letra O

// Inicio letra L
f++; gotoxy(c+11,f-25);
	Color(BLACK, RED);  
  	printf("%c", bloque);
f++; gotoxy(c+12,f-26);
  	printf("%c", bloque);
f++; gotoxy(c+13,f-27);
  	printf("%c", bloque);
f++; gotoxy(c+14,f-28);
  	printf("%c", bloque);
f++; gotoxy(c+11,f-30);
  	printf("%c", bloque);
f++; gotoxy(c+11,f-32);
  	printf("%c", bloque);
f++; gotoxy(c+11,f-34);
  	printf("%c", bloque);
f++; gotoxy(c+11,f-36);
  	printf("%c", bloque);
// Fin letra L

// Inicio letra A
f++; gotoxy(c+16,f-37);
	Color(BLACK, LBLUE); 
  	printf("%c", bloque);
f++; gotoxy(c+16,f-37);
  	printf("%c", bloque);
f++; gotoxy(c+16,f-37);
  	printf("%c", bloque);
f++; gotoxy(c+16,f-37);
  	printf("%c", bloque);
f++; gotoxy(c+16,f-37);
  	printf("%c", bloque);
f++; gotoxy(c+17,f-42);
  	printf("%c", bloque);
f++; gotoxy(c+18,f-43);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-44);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-44);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-44);
  	printf("%c", bloque);
f++; gotoxy(c+18,f-45);
  	printf("%c", bloque);
f++; gotoxy(c+17,f-46);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-48);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-47);
  	printf("%c", bloque);
f++; gotoxy(c+19,f-47);
  	printf("%c", bloque);

/*
f++; gotoxy(c,f);  
	printf("%c", A);   	

f++; gotoxy(c,f-2);  
  	printf("%c", A);   	

f++; gotoxy(c,f);  
  	printf("%c", A);   	



c++; gotoxy(c,f);  
  	printf("%c", bloque);

c++; gotoxy(c,f);  
  	printf("%c", bloque);

c--; c--; c--; gotoxy(c,f);  
  	printf("%c", bloque); 

f++; gotoxy(c,f);  
  	printf("%c", bloque); 
  	
f++; gotoxy(c,f);  
  	printf("%c", bloque); 


*/



  	
  	
	f=f+5;gotoxy(f,c+5);
	Color(BLACK, LGREEN); printf("Texto en color Verde Claro y fondo Negro");
	Color(BLACK, RED);  printf("Texto en color Rojo y fondo Negro");
	Color(BLACK, LBLUE); printf("Texto en color Azul y fondo Negro"); 

  return 0;  
 }
