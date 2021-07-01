#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int sumaTotal=0;
int valores[11] = {0},contgeneral=0, i=0,contnegativos=0,contpositivos=0,contceros=0,acumpositivos=0,promp=0,promg=0;
int main(void){

    for(i=1;i<11;i++){
//cuenta el total de casos
    contgeneral++;
//Ingresa los valores
    printf("ingrese valor: ");
    scanf("%d",&valores[i]);
 // suma todos los valores a medida que se cargan  
    sumaTotal+=valores[i];
  //valida que sea positivo
    if(valores[i]>0){
    contpositivos++;
    acumpositivos +=valores[i];
    }else if(valores[i]<0){  // valida que sea negativo
        contnegativos++;
        }else{
          contceros++;  //si no es positivo ni negativo es cero
        }

}
//calculan promedio
    system("cls");
    printf("cantidad de valores positivos: %d \n",contpositivos);
    printf("cantidad de valores negativos: %d \n",contnegativos);  
    printf("la cantidad de ceros es: %d\n",contceros);
    printf("el promedio general es de: %.2f\n",(float)sumaTotal/contgeneral);
    printf("el promedio de positivos es de: %.2f\n\n",(float)acumpositivos/contpositivos);
    
    system("pause");
    return 0;
}
