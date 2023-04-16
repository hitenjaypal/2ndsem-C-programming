#include<stdio.h>

int main (){
    int num;
    printf("Enter your number\n");
    scanf("%d" , &num);
    
    if(num==1){
        printf("Your number is smaller than 2 and 3\n");
    }

    else if(num==2){
        printf("Your number is greater than 1 and smaller than 3\n");
    }
    else if (num==3){
        printf("Your number is greater than 2 and 3\n");
    }
    else{
        printf("Its not 1,2 and 3");
    }

    return 0;
}