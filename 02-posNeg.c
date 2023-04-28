// Indicamos cual es positivo y cual es negativo
#include<stdio.h>
int main(){
    // Definimos
    float valor = 0;

    printf("\t Indicaremos si es positivo , negativo o cero los valores \n");

    printf("Ingresar el valor numerico porfavor \n");
    scanf("%f",&valor);

    if(valor > 0){
        printf("El valor que usted ingreso es positivo \n");
    }else if( valor < 0 ){
        printf("El numero que ingreso es negativo \n");
    }else if( valor == 0 ){
        printf("El valor que usted ingreso es cero \n");
    }else{
        printf("Usted no agrego ningun valor numerico \n");
    }
    return 0;
}
