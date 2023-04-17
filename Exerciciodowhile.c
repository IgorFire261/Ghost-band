#include <stdio.h>
int main(void){
    int soma,x=1;
    do{
        x++;
        if(x%2==0){
            soma=soma+x;
        }
    }while(x<=500);
    printf("Soma dos pares de 1 ate 500: %d",soma);
}