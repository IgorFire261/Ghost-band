#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    float resto;
    int n1,n2;
    printf("Entre com dois números:");
    scanf("%d %d",&n1,&n2);
    resto=n1%n2;
    printf("O resultado será de: %.2f",resto);
}