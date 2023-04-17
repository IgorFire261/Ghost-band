#include <stdio.h>
int main(void){
    int n,contp=0,conti=0;
    float mediap=0,mediag=0;
    do{
        scanf("%d",&n);
        n++;
            if(n%2==0){
             contp++;
             mediap=n/contp;
            }else{
                conti++;
            }mediag=n/(conti+contp);
    }while(n!=0);
    printf("Qtd de numeros pares: %d\n",contp);
    printf("Qtd de numeros impares: %d\n",conti);
    printf("Media de  pares: %.2f\n",mediap);
    printf("Media geral %.2f\n",mediag);
}