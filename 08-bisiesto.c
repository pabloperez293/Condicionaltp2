/* 8.	Ingresar tres valores correspondientes al día, mes y año de una fecha,
 indicar si es válida, considerar los años bisiestos. */
#include<stdio.h>
#include<math.h>
int main(){
    int  anio;

    printf( "\n   Introduzca a%co: ", 164 );
    scanf( "%i",&anio );

     if ( anio % 4 != 0 || ( anio % 100 == 0 && anio % 400 != 0 ) ){
            printf( "\n  No es un a%co bisiesto \n",164 );
     }else{
            printf( "\n  Es un a%co bisiesto \n",164 );
     }
 return 0;
}
