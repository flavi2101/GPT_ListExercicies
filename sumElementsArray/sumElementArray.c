#include<stdio.h>
#include<stdlib.h>

int * generateArray(int);

int main(){

    printf("insert the length of the array");
    int length, sum;
    scanf("%d",&length);

    int * pointOfArray = generateArray(length);

    for(int i=0; i < length; i++){
        printf("insert the %d of %d: \n", i+1, length);
        scanf("%d",(pointOfArray+i));
    }
    while (length > 0)
    {
        sum+=*pointOfArray+(length-1);
        length--;
    }
    
    printf("%d", sum);
    free(pointOfArray);

    return 0;
}

int * generateArray(int sizeArray){
    
    int * begginOfArray = (int *)malloc(sizeof(int)*sizeArray);
    return begginOfArray;

}