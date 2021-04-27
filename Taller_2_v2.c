//librerias estandar
#include <stdio.h>
#include <stdlib.h>

//opcion de menu
int opcion;

//opciones menu de frutas
int opt_fruta;
float kilos_frutas;
float valor_frutas;

//declaracion de funcion fruta
float total_por_kilos_frutas(float kilos_frutas, float valor_frutas);


//opciones menu de verduras
int opt_verduras;
float kilos_verduras;
float valor_verduras;

//declaracion de funcion verdura
float total_por_kilos_verduras(float kilos_verduras, float valor_verduras);


float resultado_verduras;
float resultado_frutas;
float total;



//programa principal
int main()
{ 
   
   do{
    //menu principal   
    printf("\n------------------- \n");
    printf("Bienvenid@ a la Verdureria!\n");
    printf("¿Que desea llevar? \n");
    printf("------------------- \n");
    printf("(1) Frutas\n");
    printf("(2) Verduras\n");
    printf("(9) Pasar por caja\n");
    printf("------------------ \n");
    printf("\n------------------- \n");
    printf("Seleccione: \n");
    scanf("%i", &opcion);
    
    //menu de frutas
    if(opcion == 1){
      printf("***************\n");
      printf("Frutas Disponibles: \n");
      printf("(1): Manzanas\n");
      printf("(2): Naranjas\n");
      printf("(3): Platanos\n");
      printf("(4): Duraznos\n");
      printf("(5): Uvas\n");
      printf("***************\n");
      printf("¿Cual desea llevar?: \n");
      scanf("%i", &opt_fruta);
  

     
      //opcion de frutas -------->
      if(opt_fruta == 1){
        valor_frutas = 1990;
        printf("Ha seleccionado Manzanas, el valor del kilogramo de Manzana es $1.990 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_frutas);
      }
      
      else if(opt_fruta == 2){
        valor_frutas = 1590;
        printf("Ha seleccionado Naranjas, el valor del kilogramo de Naranjas es $1.590 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_frutas);
      }
      
      else if(opt_fruta == 3){
        valor_frutas = 1050;
        printf("Ha seleccionado Platano, el valor del kilogramo de Platano es $1.050 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_frutas);
      }
      
      else if(opt_fruta == 4){
        valor_frutas = 2400;
        printf("Ha seleccionado Duraznos, el valor del kilogramo de Duraznos es $2.400 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_frutas);
      }
      
      else if(opt_fruta == 5){
        valor_frutas = 3580;
        printf("Ha seleccionado Uva, el valor del kilogramo de Uva es $3.580 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_frutas);
      }

        printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?\n", total_por_kilos_frutas(kilos_frutas,valor_frutas));

        resultado_frutas = total_por_kilos_frutas(kilos_frutas, valor_frutas) + resultado_frutas;
}   

  //menu de verduras
    if(opcion == 2){
      printf("***************\n");
      printf("Verdudas Disponibles: \n");
      printf("(1): Lechugas\n");
      printf("(2): Repollos\n");
      printf("(3): Zanahorias\n");
      printf("(4): Cebollas\n");
      printf("(5): Papas\n");
      printf("***************\n");
      printf("¿Cual desea llevar?: \n");
      scanf("%i", &opt_verduras);

	
      if(opt_verduras == 1){
        valor_verduras = 1150;
        printf("Ha seleccionado Lechugas, el valor de la unidad de Lechugas es $1.150 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_verduras);
    }
    
      else if(opt_verduras == 2){
        valor_verduras = 1190;
        printf("Ha seleccionado Repollos, el valor de la unidad de Repollos es $1.190 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_verduras);
    }
    
      else if(opt_verduras == 3){
        valor_verduras = 890;
        printf("Ha seleccionado Zanahorias, el valor de un kilogramo de zanahorias es $890 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_verduras);
    }
    
      else if(opt_verduras == 4){
        valor_verduras = 990;
        printf("Ha seleccionado Cebollas, el valor del kilogramo de Cebollas es $990 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_verduras);
    }
    
      else if(opt_verduras == 5){
        valor_verduras = 1290;
        printf("Ha seleccionado Papas, el valor del kilogramo de Papas es $1.290\n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_verduras);
    }
        printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?\n",total_por_kilos_verduras(kilos_verduras,valor_verduras));

        resultado_verduras = total_por_kilos_verduras(kilos_verduras, valor_verduras) + resultado_verduras;

}


//fin de programa
}while(opcion!=9);
  printf("Fin de programa\n");
  printf("El total es: $%.1f", resultado_frutas + resultado_verduras);

  printf("Seleccione la comuna de envio: ");

  return 0;
}


// funcion de precio para frutas
float total_por_kilos_frutas(float kilos_de_fruta, float valor_fruta)
{
  float x;
  x = kilos_frutas*valor_frutas;
  return x;
}


//funcion de precio para verduras
float total_por_kilos_verduras(float kilos_verduras, float valor_verduras)
{
  float x;
  x = kilos_verduras*valor_verduras;
  return x;
}
