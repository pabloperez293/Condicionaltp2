// Realizamos una igualdad
#include<stdio.h>
int main(){
    // Definimos

    float val1 = 0;
    float val2 = 0;
    int equal;

    printf(" \t Ingresaremos los siguiente valores para saber si tienen igualdad \n");

    printf("ingresar el primer valor: ",val1);
    scanf("%f",&val1);
    printf("ingresar el primer valor: ",val2);
    scanf("%f",&val2);


    if ( val1 == val2){
        printf(" \t Tienen igualdad \n");
    }else{
        printf("\t Estos valores no son iguales  \n");
    }
 return 0;
}
