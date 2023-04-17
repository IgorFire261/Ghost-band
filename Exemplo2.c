#include <stdio.h>
int main(void){
    char nome[20];
    int idade;
    for(int i=0;i<8;i++){
        printf("Digite o %d nome:",i);
        scanf("%s",nome);
        printf("Digite a idade:");
        scanf("%d",&idade);
        if(idade>21){
            printf("Nome: %s.\n",nome);
        }
    }
}