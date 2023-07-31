#include<stdio.h>
#include<stdlib.h>

int main(){

    int input;
    printf("inserte a valut to check if it's divisible for 3 and 5:\n");
    scanf("%d",&input);

    if((input % 3 == 0) && (input % 5 == 0)){
        printf("it's divisible ");
    }else printf("it's not divisible");


    return 0;
}
