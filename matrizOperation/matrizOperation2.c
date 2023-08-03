#include <stdlib.h>
#include <stdio.h>

int main()
{

    int i, j,sum,multiplicaton=1;
    printf("Data uma matriz[i][j], insira o valor de i:\n");
    scanf("%d", &i);
    printf("Data uma matriz[i][j], insira o valor de j:\n");
    scanf("%d", &j);

    int *matriz = (int *)malloc(sizeof(int) * i * j);
    printf("insert %d itens:\n", i * j);
    for (int *p = matriz; p < matriz + (i * j); p++)
    {
        scanf("%d", (p));
    }
   
    for (int *p = matriz; p < matriz + (i * j); p++)
    {
        sum+=*p;
        multiplicaton*=*p;
    }

    printf("sum is %d and multiplicaton is %d\n", sum, multiplicaton);

    return 0;
}
