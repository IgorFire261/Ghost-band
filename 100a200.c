#include <stdio.h>
int main(void){
    int num=100;
    printf("Impares: ");
    while(num>=100 && num<=200){
        if(num%2!=0){
            printf("%d, ",num);
        }num++;
    }
}