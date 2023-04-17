#include <stdio.h>
int main(void){
    float n1,n2,n3,n4,media;
    printf("Entre com 4 notas:\n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media=(n1+n2+n3+n4)/4;
    printf("A media das notas sera: %.2f",media);
}