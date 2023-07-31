#include <stdio.h>
#include <stdlib.h>

int main()
{

    int userinput;
    printf("insert a value to convert to binary. \n");
    scanf("%d", &userinput);

    int *ptr = (int *)malloc(sizeof(char));
    int i = 0;
    while (userinput > 0)
    {
        int rest = userinput % 2;
        if (rest == 0)
        {
            *(ptr + i) = 0;
        }
        else
        {
            *(ptr + i) = 1;
        }
        i++;
        userinput = userinput / 2;
        ptr = (int *)realloc(ptr, sizeof(int) * (i + 1));
    }

    for (int j = i; j > 0; j--)
    {

        printf("%d", ptr[j - 1]);
    }

    free(ptr);
    return 0;
}
