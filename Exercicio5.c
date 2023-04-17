#include <stdio.h>
int main(void){
    int sal,salf,aum;
    printf("Entre com o salario do funcionario:");
    scanf("%d",&sal);
    aum=sal*0.25;
    salf=sal+aum;
    printf("O salario final sera de: %d",salf);
}