#include <stdio.h>
#include <locale.h>
int main (void){
    setlocale(LC_ALL,"portuguese");
    int n1,n2;
    printf("Digite dois numeros:");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        printf("O maior numero é: %d",n1);
    }else{
        printf("O maior numero é: %d",n2);
    }
}