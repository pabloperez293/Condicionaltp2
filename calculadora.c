// Realizamos una calculadora

#include<stdio.h>

int main(){
    // Definimos
    float num1, num2, res;
    int oper;
    int band = 0;

   // Comienzo de Operacion
   printf(" \t\t Calculadora \t\t \n ");

   printf("ingresamos el primer numero : ");
    scanf("%f",&num1);
   printf("ingresamos el segundo numero : ");
    scanf("%f",&num2);

   printf(" \t\t Operaciones a realizar \t\t \n ");
      printf(" \t 1-Suma \t \n ");
      printf(" \t 2-Resta \t \n ");
      printf(" \t 3-Producto \t \n ");
      printf(" \t 4-Diviion \t \n ");
   printf(" \n Selecione la operacion : \t \n ");
   scanf("%i",&oper);

   // Estructura condicional multiple
switch (oper) {
    case 1: res= num1 + num2;
    break;
    case 2: res= num1 - num2;
    break;
    case 3: res= num1 * num2;
    break;
    case 4: res= num1 / num2;
    break;
    default: band=1;
}
   // Estructura condicional

if (band == 0){
    printf("\t El resultado de la operacion es %f \n",res);
}else{
    printf("\n Ingreso una operacion incorrecta \n");
}
    return 0;
 }
