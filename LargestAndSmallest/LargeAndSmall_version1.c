#include <stdio.h>
#include <stdlib.h>

int main()
{

   /* Atribuindo o primeiro valor do array as variaveis que terão
    o retorno esperado - Menor e maior valor*/
    int array[5] = {4, 12, 98, 34, 67};
    int less = *(array);
    int large = *(array);


    /* Verificando em cada interação o menor e maior valor e atribuindo as
    variaveis de retorno.*/
    for (int i = 1; i < 5; i++)
    {

        if (*(array + i) < less)
        {
            less = *(array + i);
        }
        if (*(array + i) > large)
        {
            large = *(array + i);
        }
    }

    printf("The less value is %d and the larg value is %d \n", less, large);

    return 0;
}
