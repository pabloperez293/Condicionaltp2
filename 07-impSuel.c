/* 7.	Ingresar el valor de la hora y el tiempo trabajado por un empleado,
 calcular su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50 hs
 y si trabajo más de 150 hs le dan otros $ 100 adicionales. Imprimir el sueldo  */
#include<stdio.h>
#include<math.h>
int main(){
    int hora, tiempo;
    int operacion;
    int band = 0;
    int sueldo;

       // Comienzo de Operacion
    printf(" \t\t Calculamos el sueldo \t\t \n \n ");

    printf("ingresamos la hora trabajada : ");
    scanf("%i",&hora);
    printf("ingresamos el tiempo trabajado : ");
    scanf("%i",&tiempo);

// Estructura condicional

if (hora <= 150){
        sueldo = hora * tiempo + 100;
        printf("\t El resultado de la operacion es %i \n",sueldo);
}else if(hora > 150 ){
        sueldo = hora * tiempo + 200;
        printf("\t Elresultado de la operacion es %i \n",sueldo);
}else{
        printf("\n Ingreso una operacion incorrecta \n");

}
    return 0;
 }
