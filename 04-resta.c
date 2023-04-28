/* Indicamos 2 valores y realizamos la resta del mayor menos el menor */
#include<stdio.h>
int main(){
    // Definimos
    int val1 = 0;
    int val2 = 0;
    int res;

    printf(" \t Realizamos  una resta del mayor menos el menor \n");

    printf(" \t Ingresar primer valor: ");
    scanf("%i",&val1);
    printf(" \t Ingresar segundo valor: ");
    scanf("%i",&val2);

    if(val1 > val2 ){
        res = val1 - val2;
        printf(" El primer valor era mayor y el resultado de la resta es %i ",res);
    }else{
        printf("\n El segundo valor no era mayor  \n");
    }
 return 0;
}
