#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numb[5];
    int size = (int)(sizeof(numb) / sizeof(numb[0]));

    for (int i = 0; i < size; i++)
    {
        printf("insert the %d elements of the array \n", i);
        scanf("%d", &numb[i]);
    }

    for (int i = 1; i < size; i++)
    {
        int key = numb[i];
        int j = i - 1;
        while (j >= 0 && numb[j] > key)
        {
            numb[j + 1] = numb[j];
            numb[j] = key;
            j--;
        }
    }

    return 0;
}