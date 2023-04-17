#include <stdio.h>
int main(void){
    int n,opcao,cont=0;
    do{
        printf("Digite um numero:\n");
        scanf("%d",&n);
        printf("Menu de opcoes:\n");
        printf("1-Continuar.\n");
        printf("2-Sair.\n");
        scanf("%d",&opcao);
        if(opcao==1){
            if(n>30){
                printf("%d\n",n);
                cont++;
            }

        }
    }while(opcao!=2);
    printf("Numeros maiores que 30 digitados: %d\n",cont);
}