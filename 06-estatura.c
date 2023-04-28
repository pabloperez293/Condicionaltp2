/* Indicamos la edad y la altura de 2 personas , indicar la estatura del mayor de edad
y si son iguales  */
#include<stdio.h>
#include<math.h>
int main(){
    int edad1,edad2;
    float altura1, altura2;

    printf("\t\t Se imprimira la estatura del de mayor edad \n");

    printf("Ingresar la edad de la primer persona: ");
    scanf("%i",&edad1);
    printf("Ingresar la altura de la primer persona: ");
    scanf("%f",&altura1);
    printf("Ingresar la edad de la segunda persona: ");
    scanf("%i",&edad2);
    printf("Ingresar la altura de la segunda persona: ");
    scanf("%f",&altura2);

    if( edad1 > edad2 ){
            printf("\n El mas grande es : %i \n ");
    }else if( edad1 < edad2){
        printf(" Entonces %0.2f es mas grande \n",altura2);
    }else{
        printf("Ambos tienen la misma edad \n");
    }
 return 0;
}
