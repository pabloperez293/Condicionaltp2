/* Indicamos 3 lados de un triangulo e indicar que tipo de triangulo es */
#include<stdio.h>
#include<math.h>
int main(){
    // Definimos
    float lad1 = 0;
    float lad2 = 0;
    float lad3 = 0;
    float area, s;

    printf(" \t Ingresaremos los Lados de un triangulo para saber que tipo es \n");

    printf(" Ingresar primer lado: ");
    scanf("%f",&lad1);
    printf(" Ingresar segundo lado: ");
    scanf("%f",&lad2);
    printf(" Ingresar tercer lado: ");
    scanf("%f",&lad3);

    if( ((lad1 + lad2) < lad3) && ((lad1 + lad3) < lad2) && ((lad3 + lad2) < lad1) ){
        s = ( lad1 + lad2 + lad3) / 2.0;
        area = sqrt( s * (s - lad1) * (s - lad2) * (s - lad3));
        printf(" El triangulo es de %.2f \n", area);

        if( lad1 == lad2 && lad1 == lad3){
            printf(" El triagunlo es equilatero \n");
        }else if (lad1 == lad2 || lad2 == lad3 || lad1 == lad3){
            printf(" El triaunglo es isoseles. \n");
        }else{
            printf(" El triagunlo es escaleno. \n");
    }}
    else{
        printf(" \n No corresponde a un triangulo \n ");
    }
return 0;
}
