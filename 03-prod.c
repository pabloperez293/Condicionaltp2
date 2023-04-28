/* Indicamos 2 valores y realizamos el producto si el 1° es mayor al 2° .
si son iguales solo imprimirlo. */
#include<stdio.h>
int main(){
    // Definimos
    int val1 = 0;
    int val2 = 0;

    printf(" \t Realizaremos el producto si el primer valor es mayor \n");

    printf(" ingresar el primer valor porfavor ");
    scanf("%i",&val1);
    printf(" ingresar el segundo valor porfavor ");
    scanf("%i",&val2);

    if(val1 > val2){
        int prod = val1 * val2;
        printf(" El producto es de %i \n", prod);
    }else if(val1 == val2){
        printf(" Estos valores son iguales \n ");
    }else{
        printf(" El segundo valor es mas grande que el primero");
    }
 return 0;
}
