#include <stdio.h>
#include <stdlib.h>

void lessandLarge();

int main()
{
    // Utilizando função para treinar alocação dinamica de memoria.
    lessandLarge();
    return 0;
}

void lessandLarge()
{

    int inputSize;
    int less = 0, larg = 0;
    printf("Inset how many itens will be in your list:\n");

    /*Usuário insere quantos itens vai inserir para que possamos alocar somente
    a quantidade de memoria necessária */
    scanf("%d", &inputSize);
    int *arr = (int *)malloc(sizeof(int) * inputSize);

    for (int i = 0; i < inputSize; i++)
    {
        printf("inse the %d element of %d:\n", i + 1, inputSize);
        scanf("%d", (arr + i));
    }

    for (int j = 0; j < inputSize; j++)
    {
        if (arr[j] < less)
        {
            less = arr[j];
        }
        if (arr[j] > larg)
        {
            larg = arr[j];
        }
    }
    printf("Array3 - The less value is %d and the larg value is %d \n", less, larg);
    free(arr);
}
