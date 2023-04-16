#include<stdio.h>

int main (){
    float p,r,n,i;
    printf("enter the value of principle amount,rate of amount,no of years");
    scanf("%f,%f,%f,&p,&r,&n");
    //i=p*r*n/100
    printf("simple interest is %2f",i=p*r*n/100);
        return 0;
}