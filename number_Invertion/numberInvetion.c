
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char number[3];
    char copyNumber[3];
    printf("insert a number of three digits:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &number[i]);
    }

    int aux = 0;
    for (int i = 2; i >= 0; i--)
    {
        copyNumber[aux] = number[i];
        aux++;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%c", copyNumber[i]);
    }
    return 0;
}