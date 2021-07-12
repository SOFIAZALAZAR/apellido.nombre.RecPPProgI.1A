#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  int id;
  char procesador[50];
  char marca[50]  ;
  float precio;
}eNotebook;



/*1. Crear una función llamada aplicarDescuento que reciba como parámetro el
 precio de un producto y devuelva el valor del producto con un descuento del 5%.
 Realizar la llamada desde el main.*/

float aplicarDescuento(float precio);
/*2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y
 un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena */
 int contarCaracteres(char cadena[], char caracter);
/*3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array de dicha estructura por marca.
Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main.*/
int ordenarNoteboks(eNotebook lista[],int tam);
int main()
{
    float precio = 100;
    printf("%.2f\n",aplicarDescuento(precio));
    char nombre[]="martina";
    printf("%d\n",contarCaracteres(nombre,'a'));

    return 0;
}
float aplicarDescuento(float precio)
{
    return precio*0.95;
}

 int contarCaracteres(char cadena[], char caracter)
 {
     int cant=0;
     int tam = strlen(cadena);
     if(cadena!=NULL)
     {
       for(int i=0; i<tam; i++)
       {
           if(cadena[i]==caracter)
           {
               cant++;
           }
       }
     }

     return cant;
 }

int ordenarNoteboks(eNotebook lista[],int tam)
{
    int todoOk=0;
    if(lista!=NULL && tam>0)
    {
       for(int i=0; i<tam-1; i++)
      {
      for(int j=i+1; j<tam; j++){
        if()

      }

      }

    }

}







