#include <stdio.h>
#include <stdlib.h>

int opcion; //opcion de menu

//opciones menu de frutas
int opt1_fruta;
float kilos_fruta;
float valor_fruta;
float total_por_kilos_frutas(float kilos_fruta, float valor_fruta);
float resultado_fruta;

//opciones menu de verduras
int opt1_verduras;
float kilos_verdura;
float valor_verduras;
float total_por_kilos_verduras(float kilos_verdura, float valor_verduras);
float resultado_verdura;
float v;




//programa principal
int main()
{ 
   
  
   do{
    printf("\n------------------- \n");
    printf("Bienvenid@ a la Verdureria!\n");
    printf("¿Que desea llevar? \n");
    printf("------------------- \n");
    printf("(1) Frutas\n");
    printf("(2) Verduras\n");
    printf("(9) Salir\n");
    printf("------------------ \n");
    printf("Valor total: $%f\n", resultado_verdura+resultado_fruta);
    printf("------------------- \n");
    printf("Seleccione: \n");
    scanf("%i", &opcion);
    


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
    scanf("%i", &opt1_fruta);
  

//opcion de frutas -------->
	
      if(opt1_fruta == 1){
      valor_fruta = 1990;
      printf("Ha seleccionado Manzanas, el valor del kilogramo de Manzana es $1.990 \n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_fruta);
      }
      
      else if(opt1_fruta == 2){
        valor_fruta = 1590;
        printf("Ha seleccionado Naranjas, el valor del kilogramo de Naranjas es $1.590 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_fruta);

      }
      
      else if(opt1_fruta == 3){
        valor_fruta = 1050;
        printf("Ha seleccionado Platano, el valor del kilogramo de Platano es $1.050 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_fruta);
      }
      
      else if(opt1_fruta == 4){
        valor_fruta = 2400;
        printf("Ha seleccionado Duraznos, el valor del kilogramo de Duraznos es $2.400 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_fruta);
      }
      
      else if(opt1_fruta == 5){
        valor_fruta = 3.580;
        printf("Ha seleccionado Uva, el valor del kilogramo de Uva es $3.580 \n");
        printf("¿Cuantos kilos desea llevar? \n");
        scanf("%f",&kilos_fruta);
      }
    printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?", total_por_kilos_frutas(kilos_fruta,valor_fruta));

    float resultado_fruta = total_por_kilos_frutas(kilos_fruta, valor_fruta) + resultado_fruta;

    printf("tu resultado es $%.1f", resultado_fruta);
  }   

//opcion de verduras -------->

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
  scanf("%i", &opt1_verduras);

	
    if(opt1_verduras == 1){
      valor_verduras = 1150;
      printf("Ha seleccionado Lechugas, el valor de la unidad de Lechugas es $1.150 \n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_verdura);
    }
    
    else if(opt1_verduras == 2){
      valor_verduras = 1190;
      printf("Ha seleccionado Repollos, el valor de la unidad de Repollos es $1.190 \n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_verdura);
    }
    
    else if(opt1_verduras == 3){
      valor_verduras = 890;
      printf("Ha seleccionado Zanahorias, el valor de un kilogramo de zanahorias es $890 \n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_verdura);
    }
    
    else if(opt1_verduras == 4){
      valor_verduras = 990;
      printf("Ha seleccionado Cebollas, el valor del kilogramo de Cebollas es $990 \n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_verdura);
    }
    
    else if(opt1_verduras == 5){
      valor_verduras = 1290;
      printf("Ha seleccionado Papas, el valor del kilogramo de Papas es $1.290\n");
      printf("¿Cuantos kilos desea llevar? \n");
      scanf("%f",&kilos_verdura);
    }
    printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?",total_por_kilos_verduras(kilos_verdura,valor_verduras));
  
  float resultado_verdura = total_por_kilos_verduras(kilos_verdura, valor_verduras) + resultado_verdura;

  printf("tu resultado es $%.1f", resultado_verdura);

}

float valor_total = resultado_fruta + resultado_verdura;

}while(opcion!=9);
  printf("Fin de programa");


  
  return 0;
}



float total_por_kilos_frutas(float kilos_de_fruta, float valor_fruta)
{
  float x;
  x = kilos_fruta*valor_fruta;
  return x;
}


float total_por_kilos_verduras(float kilos_verduras, float valor_verduras)
{
  float x;
  x = kilos_verdura*valor_verduras;
  return x;
}