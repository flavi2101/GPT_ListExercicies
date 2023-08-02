#include <stdio.h>
#include <stdlib.h>
void lessandLarge(int *, int *, int *);

int main()
{

    /* Atribuindo o primeiro valor do array as variaveis que terão
    o retorno esperado - Menor e maior valor*/
    int array2[5] = {4, 12, 98, 34, 67};
    int less2 = *(array2);
    int large2 = *(array2);

    // Utilizando função para treinar passar poiters como paramentros
    lessandLarge(array2, &less2, &large2);

    return 0;
}

void lessandLarge(int *arr, int *less, int *larg)
{

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] < *less)
        {
            *less = arr[j];
        }
        if (arr[j] > *larg)
        {
            *larg = arr[j];
        }
    }
    printf("Array2 - The less value is %d and the larg value is %d \n", *less, *larg);
}
