#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inputs[3];
    float biggest = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("insert a value %d/3:\n", i + 1);
        scanf(" %f", &inputs[i]);
    }

    for (int i = 0; i < 3; i++)
    {
       if(*(inputs+i) > biggest){
        biggest = *(inputs+i);
       }
    }

    printf("%f",biggest);
    return 0;
}
