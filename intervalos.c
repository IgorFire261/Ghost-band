#include <stdio.h>
int main(void){
    int n,cont=0,cont1=0,cont2=0,cont3=0;
    do{
        scanf("%d",&n);
        if(n>=0 && n<=25){
            cont++;
        }else if(n>25 && n<=50){
            cont1++;
        }else if(n>50 && n<=75){
            cont2++;
        }else if(n>75 && n<=100){
            cont3++;
        }
    }while(n>=0);
    printf("Intervalo de {0,25}: %d\n",cont);
    printf("Intervalo de {26,50}: %d\n",cont1);
    printf("Intervalo de {51,75}: %d\n",cont2);
    printf("Intervalo de {76,100}: %d\n",cont3);
}