#include <stdio.h>
#include <stdlib.h>

void sortItem(int *, int *);

int main()
{
	int numb[5];
	

	for (int i = 0; i < 5; i++)
	{
		printf("insert the %d elements of the array \n",i);
		scanf("%d", &numb[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (numb[j] < numb[i])
			{
				sortItem(&numb[j], &numb[i]);
			}
		}
	}

	for (int i = 0; i < 5; i++)
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