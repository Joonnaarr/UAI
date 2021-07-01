#include <stdio.h>
#include <stdlib.h>


int main(void) {
  
  int codigoCliente, numeroCamion, tipoEnvio, contoro=0, contbilletes=0, contpiedras=0, contdocumentos=0, valororo=30000, valorbilletes=25000, valorpiedras=20000, valordoc=15000, cantidadTotal, camion1=0, camion2=0, camion3=0, camion4=0, camion5=0, camion6=0, camion7=0, camion8=0, oroCamion1=0, oroCamion2=0, oroCamion3=0, oroCamion4=0, oroCamion5=0, oroCamion6=0, oroCamion7=0, oroCamion8=0, bandera=1, auxcodigoCliente=0, auxMenortransp=0, recaudadoCamion1=0, recaudadoCamion2=0, recaudadoCamion3=0, recaudadoCamion4=0, recaudadoCamion5=0, recaudadoCamion6=0, recaudadoCamion7=0, recaudadoCamion8=0, totalEmpresa=0;

  do{
  printf("Ingrese el codigo del cliente: ");
  scanf("%d", &codigoCliente);
  if(codigoCliente==0){
			break;
	}
  do{
  printf("Ingrese la cantidad del material a trasladar: \n");
  scanf("%d", &cantidadTotal);
  } while(cantidadTotal<0);

  printf("Ingrese el tipo de envio:\n1) Oro \n2) Billetes \n3) Piedras Preciosas \n4) Documentos \n");
  scanf("%d", &tipoEnvio);  
  switch (tipoEnvio) {
    case 1:{
      contoro++;
      printf("Ingrese el numero de camion: ");
      scanf("%d", &numeroCamion);

      switch (numeroCamion) {
        case 1:{
          camion1++;
          recaudadoCamion1+=valororo;
          oroCamion1+=cantidadTotal;
        break;
        }        
        case 2:{
        camion2++;
        recaudadoCamion2+=valororo;
        oroCamion2+=cantidadTotal;
        break;
        }
        case 3:{
        camion3++;
        recaudadoCamion3+=valororo;
        oroCamion3+=cantidadTotal;
        break;
        }
        case 4:{
        camion4++;
        recaudadoCamion4+=valororo;
        oroCamion4+=cantidadTotal;
        break;
        }
        case 5:{
        camion5++;
        recaudadoCamion5+=valororo;
        oroCamion5+=cantidadTotal;
        break;
        }
        
        case 6:{
        camion6++;
        recaudadoCamion6+=valororo;
        oroCamion6+=cantidadTotal;
        break;
        }
        case 7:{
        camion7++;
        recaudadoCamion7+=valororo;
        oroCamion7+=cantidadTotal;
        break;
        }
        case 8:{
        camion8++;
        recaudadoCamion8+=valororo;
        oroCamion8+=cantidadTotal;
        break;
        }
        }
    break;
  }    
  case 2:{
     contbilletes++;
     printf("Ingrese el numero de camion: ");
  scanf("%d", &numeroCamion);
  
  switch (numeroCamion) {
    case 1:{
     camion1++;
     recaudadoCamion1+=valorbilletes;
    break;
    }
    
    case 2:{
     camion2++;
     recaudadoCamion2+=valorbilletes;
    break;
    }
    case 3:{
     camion3++;
     recaudadoCamion3+=valorbilletes;
    break;
    }
    case 4:{
     camion4++;
     recaudadoCamion4+=valorbilletes;
    break;
    }
    case 5:{
     camion5++;
     recaudadoCamion5+=valorbilletes;
    break;
    }
    
    case 6:{
     camion6++;
     recaudadoCamion6+=valorbilletes;
    break;
    }
    case 7:{
     camion7++;
     recaudadoCamion7+=valorbilletes;
    break;
    }
    case 8:{
     camion8++;
     recaudadoCamion8+=valorbilletes;
    break;
    }
  }
    break;
    }
    case 3:{
     contpiedras++;
     printf("Ingrese el numero de camion: ");
  scanf("%d", &numeroCamion);
  
  switch (numeroCamion) {
    case 1:{
     camion1++;
     recaudadoCamion1+=valorpiedras;
    break;
    }
    
    case 2:{
     camion2++;
     recaudadoCamion2+=valorpiedras;
    break;
    }
    case 3:{
     camion3++;
     recaudadoCamion3+=valorpiedras;
    break;
    }
    case 4:{
     camion4++;
     recaudadoCamion4+=valorpiedras;
    break;
    }
    case 5:{
     camion5++;
     recaudadoCamion5+=valorpiedras;
    break;
    }
    
    case 6:{
     camion6++;
     recaudadoCamion6+=valorpiedras;
    break;
    }
    case 7:{
     camion7++;
     recaudadoCamion7+=valorpiedras;
    break;
    }
    case 8:{
     camion8++;
     recaudadoCamion8+=valorpiedras;
    break;
    }
  }
    break;
    }
    case 4:{
     contdocumentos++;
     printf("Ingrese el numero de camion: ");
  scanf("%d", &numeroCamion);
  
  switch (numeroCamion) {
    case 1:{
     camion1++;
     recaudadoCamion1+=valordoc;
     
    break;
    }
    
    case 2:{
     camion2++;
     recaudadoCamion2+=valordoc;
    break;
    }
    case 3:{
     camion3++;
     recaudadoCamion3+=valordoc;
    break;
    }
    case 4:{
     camion4++;
     recaudadoCamion4+=valordoc;
    break;
    }
    case 5:{
     camion5++;
     recaudadoCamion5+=valordoc;
    break;
    }    
    case 6:{
     camion6++;
     recaudadoCamion6+=valordoc;
    break;
    }
    case 7:{
     camion7++;
     recaudadoCamion7+=valordoc;
    break;
    }
    case 8:{
     camion8++;
     recaudadoCamion8+=valordoc;
    break;
    }
  }
    break;
    }
  }
  
  if (bandera==1) {
    auxcodigoCliente=codigoCliente;
    auxMenortransp=cantidadTotal;
    bandera=0;
  }
  if (cantidadTotal<auxMenortransp) {
    auxcodigoCliente=codigoCliente;
    auxMenortransp=cantidadTotal;
  }
        
  } while(codigoCliente!=0);
  //A.	Cantidad de viajes realizados por cada camión 
  printf("El camion 1 realizo: %d viajes\n",camion1);
  printf("El camion 2 realizo: %d viajes\n",camion2);
  printf("El camion 3 realizo: %d viajes\n",camion3);
  printf("El camion 4 realizo: %d viajes\n",camion4);
  printf("El camion 5 realizo: %d viajes\n",camion5);
  printf("El camion 6 realizo: %d viajes\n",camion6);
  printf("El camion 7 realizo: %d viajes\n",camion7);
  printf("El camion 8 realizo: %d viajes\n",camion8);
  
  //B.	Total transportado por camión de oro
  printf("\nEl camion 1 transporto: %d de oro\n",oroCamion1);
  printf("El camion 2 transporto: %d de oro\n",oroCamion2);
  printf("El camion 3 transporto: %d de oro\n",oroCamion3);
  printf("El camion 4 transporto: %d de oro\n",oroCamion4);
  printf("El camion 5 transporto: %d de oro\n",oroCamion5);
  printf("El camion 6 transporto: %d de oro\n",oroCamion6);
  printf("El camion 7 transporto: %d de oro\n",oroCamion7);
  printf("El camion 8 transporto: %d de oro\n\n",oroCamion8);
  
  //C.	Recaudación de cada valor
  printf("La recaudacion del valor de oro es: %d\n", contoro*valororo);
  printf("La recaudacion del valor de billetes es: %d\n", contbilletes*valorbilletes);
  printf("La recaudacion del valor de piedras preciosas es: %d\n", contpiedras*valorpiedras);
  printf("La recaudacion del valor de documentos es: %d\n\n", contdocumentos*valordoc);
  
  //D.	Cliente que transportó menos en un viaje
  printf("El cliente que transporto menos es: %d\n\n", codigoCliente);

  //E.	Porcentual que representa lo recaudado por cada camión sobre el total de la empresa
  totalEmpresa = recaudadoCamion1+recaudadoCamion2+recaudadoCamion3+recaudadoCamion4+recaudadoCamion5+recaudadoCamion6+recaudadoCamion7+recaudadoCamion8;
  printf("El camion 1 recaudo: %d %c\n" , recaudadoCamion1*100/totalEmpresa,37);
  printf("El camion 2 recaudo: %d %c\n" , recaudadoCamion2*100/totalEmpresa,37);
  printf("El camion 3 recaudo: %d %c\n" , recaudadoCamion3*100/totalEmpresa,37);
  printf("El camion 4 recaudo: %d %c\n" , recaudadoCamion4*100/totalEmpresa,37);
  printf("El camion 5 recaudo: %d %c\n" , recaudadoCamion5*100/totalEmpresa,37);
  printf("El camion 6 recaudo: %d %c\n" , recaudadoCamion6*100/totalEmpresa,37);
  printf("El camion 7 recaudo: %d %c\n" , recaudadoCamion7*100/totalEmpresa,37);
  printf("El camion 8 recaudo: %d %c\n" , recaudadoCamion8*100/totalEmpresa,37);


  //F. Promedio de cada uno de los valores transportados
  printf("El valor oro recaudo: %.2f %c\n" , ((float) contoro*valororo/totalEmpresa)*100,37);
  printf("El valor billetes recaudo: %.2f %c\n" , ((float) contbilletes*valorbilletes/totalEmpresa)*100,37);
  printf("El valor piedras preciosas recaudo: %.2f %c\n" , ((float) contpiedras*valorpiedras/totalEmpresa)*100,37);
  printf("El valor documentos recaudo: %.2f %c\n" , ((float) contdocumentos*valordoc/totalEmpresa)*100,37);
  return 0;
}
