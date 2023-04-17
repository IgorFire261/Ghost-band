#include <stdio.h>
int main (void){
    float pesoi;
    int h;
    char sexo;
    printf("Entre com seu sexo:");
    scanf("%c",&sexo);
    printf("Entre com sua altura:");
    scanf("%d",&h);
    if(sexo=='F'){
        pesoi=(h*62.1)-44.7;
        printf("Seu peso ideal: %.2f",pesoi);
    }if(sexo=='M'){
        pesoi=(h*71.7)-58;
        printf("Seu peso ideal: %.2f",pesoi);
    }
}