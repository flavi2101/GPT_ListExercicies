#include<stdlib.h>
#include<stdio.h>

int main(){

    int matrix[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    int sumMatrix,multiplicatonMatrix=1;
        for(int i =0; i< 4; i ++){
            for (int j=0; j < 2; j++){
                sumMatrix+=matrix[i][j];
            }
        }
        for(int i =0; i< 4; i ++){
            for (int j=0; j < 2; j++){
                multiplicatonMatrix*=*((*(matrix +i))+j);
            }
        }
    
        printf("Sum of the elements are: %d:\n", sumMatrix);
        printf("Multiplication of the elements are: %d\n",multiplicatonMatrix);

    return 0;
}
