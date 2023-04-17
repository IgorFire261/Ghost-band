int main(void){
    float idade,peso,i;
    for(i=0;i<20;i++){
        scanf("%f %f",&idade,&peso);
        if(idade>=1 && idade<=10){
            printf("Media de 1 a 10 anos= %.2f \n",peso/idade);
        }else if(idade>10 && idade<=20){
            printf("Media de 11 a 20 anos= %.2f \n",peso/idade);
        }else if(idade>20 && idade<=30){
            printf("Media de 21 a 30 anos= %.2f \n",peso/idade);
        }else{
            printf("Media de 30 anos acima= %.2f \n",peso/idade);
        }
    }
}