#include <iostream>
 
using namespace std;
 
int main() {
 
    float sal,aum,nsal;
    scanf("%f",&sal);
    if(sal>=0 && sal<=400){
        aum=sal*0.15;
        nsal=sal+aum;
        printf("Novo salario: %.2f\n",nsal);
        printf("Reajuste ganho: %.2f\n",aum);
        printf("Em percentual: 15 %%\n");
    }else if(sal>400 && sal<=800){
        aum=sal*0.12;
        nsal=sal+aum;
        printf("Novo salario: %.2f\n",nsal);
        printf("Reajuste ganho: %.2f\n",aum);
        printf("Em percentual: 12 %%\n");
    }else if(sal>800 && sal<=1200){
        aum=sal*0.10;
        nsal=aum+sal;
        printf("Novo salario: %.2f\n",nsal);
        printf("Reajuste ganho %.2f\n",aum);
        printf("Em percentual: 10 %%\n");
    }else if(sal>1200 && sal<=2000){
        aum=sal*0.07;
        nsal=sal+aum;
        printf("Novo salario: %.2f\n",nsal);
        printf("Reajuste ganho: %.2f\n",aum);
        printf("Em percentual: 7 %%\n");
    }else{
        aum=sal*0.04;
        nsal=sal+aum;
        printf("Novo salario: %.2f\n",nsal);
        printf("Reajuste ganho: %.2f\n",aum);
        printf("Em percentual: 4 %%\n");
    }
 
    return 0;
}