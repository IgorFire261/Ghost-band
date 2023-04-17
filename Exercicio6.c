#include <stdio.h>
int main(void){
    float n1,n2,n3,n4,soma,quad1,quad2,quad3,quad4;
    printf("Entre com 4 numeros:");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    quad1=n1*n1;
    quad2=n2*n2;
    quad3=n3*n3;
    quad4=n4*n4;
    soma=quad1+quad2+quad3+quad4;
    printf("A soma sera de: %2.f",soma);
}