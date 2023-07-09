
#include <stdio.h>
#include <stdlib.h>

void sortItem(int *, int *);

int main()
{

    int numb[5];
    int size = (int)(sizeof(numb) / sizeof(numb[0]));
    int swapped;
    for (int i = 0; i < size; i++)
    {
        printf("insert the %d elements of the array \n", i);
        scanf("%d", &numb[i]);
    }

    for (int i = 0; i < size; i++)
    {
        swapped = 0;
        // minus i it's to prevent check the value that we just swapped.
        for (int j = 0; j < size - i; j++)
        {
            if (numb[j] > numb[j + 1])
            {
                sortItem(&numb[j], &numb[j + 1]);
                swapped = 1;
            }
        }
        // if no swap than the list ir alredy orderned and we must break
        if (swapped == 0)
            break;
    }

    for (int i = 0; i < size; i++)
    {
        printf("sorted %d \n", numb[i]);
    }

    return 0;
}

void sortItem(int *less, int *gret)
{

    int aux = *less;
    *less = *gret;
    *gret = aux;
}