
#include <stdio.h>
#include <stdlib.h>

int checkIsPali(int  , char * );


int main() {
   
    printf("Insert a number:\n");
    int capacity = 1;
    char* str = (char *)malloc(sizeof(char));
   
    char value;
    int length = 0;
      

    while(value != '\n'){
        if (length >= capacity) {
            capacity *= 2;
            str = (char *)realloc(str, capacity * sizeof(char));
        }
        scanf("%c", &value);
        *(str+length) = value;
        length++;
       
        
    }

    int response = checkIsPali(length-2, str);
    printf("size of str %zu \n", sizeof(str));
    free(str);
    printf("response:%d \n", response);
    return 0;
}

int checkIsPali(int sizeInput, char * ptr){
    int leftPosition =0;
    int rightPosition = sizeInput;

        while ( sizeInput >0){
            char left = *(ptr+leftPosition);
            char right = *(ptr + rightPosition);

            if(left == right){
                leftPosition++;
                rightPosition--;
                sizeInput--;
            }else return 0;

        }
        return 1;
}