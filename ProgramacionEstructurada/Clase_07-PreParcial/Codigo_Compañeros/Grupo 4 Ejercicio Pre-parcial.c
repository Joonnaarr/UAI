#include<stdio.h>

int main(){
	//Declaracion de variables
	int departamento,categoria,dep2=0,
	sueldos_analistas,sueldos_analistaj,sueldos_programador,sueldos_operador, //sueldos de categorias
	empleados_as=0,empleados_aj=0,empleados_p=0,empleados_o=0, //empleados por categoria
	sumatoria_total, promedio1,promedio2,promedio3,promedio4,mejor_paga,i;
	
	i=1; //Declaracion de contador en 1
	printf("\t\t\t\tBienvenido\n\t\tSe solicita registro de datos de empleados");
	
	while(i<=5){ //Inicio de bucle	
		//Menu
		printf("\n\n-Categoria: 1.Analista senior 2.Analista junior 3.Programador 4.Operador\n-Numero de Departamento");
		printf("\n\nEMPLEADO %d",i);	
		
		printf("\n\nDigite su categoria: "),scanf("%i",&categoria); //Escaneo de variable
		printf("\n\nDigite su departamento: "),scanf("%i",&departamento); //Escaneo de variable
		
		switch(categoria){//Contabilidad empleados por categoria
			case 1:empleados_as+=1;break;
			case 2:empleados_aj+=1;break;
			case 3:empleados_p+=1;break;
			case 4:empleados_o+=1;break;
		}
	
		if(departamento==2){ //Contabilidad de empleados del departamento 2	
			dep2+=1;
		}
		
		i++; //Aumantar valor de i+1
		
	} //Fin del bucle
	
	//Calcuco de sueldo total de cada categoria= Sueldo_Individual*Cantidad de empleados
	sueldos_analistas=85000*empleados_as;
	sueldos_analistaj=40000*empleados_aj;
	sueldos_programador=65000*empleados_p;
	sueldos_operador=30000*empleados_o;
	
	//Comparacion de categoria con mayor sueldo total
	if(sueldos_analistas>sueldos_analistaj && sueldos_analistas>sueldos_programador && sueldos_analistas>sueldos_operador){
		mejor_paga=1;
	}
	else if(sueldos_analistaj>sueldos_analistas && sueldos_analistaj>sueldos_programador && sueldos_analistaj>sueldos_operador){
		mejor_paga=2;
	}
	else if(sueldos_programador>sueldos_analistas && sueldos_programador>sueldos_analistaj && sueldos_programador>sueldos_operador){
		mejor_paga=3;
	}
	else if(sueldos_operador>sueldos_analistas && sueldos_operador>sueldos_analistaj && sueldos_operador>sueldos_programador){
		mejor_paga=4;
	}
	
	//Calculo de sumatoria total de la empresa= Sueldo_categoria1+Sueldo_categoria2...n
	sumatoria_total=sueldos_analistas+sueldos_analistaj+sueldos_programador+sueldos_operador;
	
	//Calculo de sueldo promedio de cada categoria= Sueldo_categoria/Cantidad de empleados
	promedio1=sueldos_analistas/empleados_as;
	promedio2=sueldos_analistaj/empleados_aj;
	promedio3=sueldos_programador/empleados_p;
	promedio4=sueldos_operador/empleados_o;
	
	//Impresion de resultados
	printf("\n=======================================");
	printf("\n\n*Sueldo total a pagar a cada categoria* ");
	printf("\n\nAnalista Senior: $%d",sueldos_analistas);
	printf("\nAnalista Junior: $%d",sueldos_analistaj);
	printf("\nProgramador: $%d",sueldos_programador);
	printf("\nOperador: $%d",sueldos_operador);
	printf("\n=======================================");
	printf("\n\n*Categoria que mas cobra en total*");
	if(mejor_paga==1){
		printf("\n\nCategoria con mas paga: Analista Senior");
	}
	else if(mejor_paga==2){
		printf("\n\nCategoria con mas paga: Analista Junior");
	}
	else if(mejor_paga==3){
		printf("\n\nCategoria con mas paga: Programador");
	}
	else if(mejor_paga==4){
		printf("\n\nCategoria con mas paga: Operador");
	}
	printf("\n=======================================");
	printf("\n\n*Cantidad de empleados por categoria*");
	printf("\n\nAnalista Senior: %d",empleados_as);
	printf("\nAnalista Junior: %d",empleados_aj);
	printf("\nProgramador: %d",empleados_p);
	printf("\nOperador: %d",empleados_o);
	printf("\n=======================================");
	printf("*\n\nCuantos empleados trabajan en el departamento numero 2*");
	printf("\nCantidad: %d",dep2);
	printf("\n=======================================");
	printf("\n\n*Sumatoria total de sueldos a pagar por la empresa*");
	printf("\n\nTotal: $%d",sumatoria_total);
	printf("\n=======================================");
	printf("\n\n*Promedio de sueldos por categoria*");
	printf("\n\nPromedio Analista Senior: $%d",promedio1);
	printf("\nPromedio Analista Junior: $%d",promedio2);
	printf("\nPromedio Programador: $%d",promedio3);
	printf("\nPromedio Operador: $%d",promedio4);
	
	return 0;
}
