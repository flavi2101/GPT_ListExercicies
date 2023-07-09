#include <stdio.h>
#include <stdlib.h>

void sortItem(int *, int *);

int main()
{
	int numb[5];
	int size = (int)(sizeof(numb) / sizeof(numb[0]));
   

	for (int i = 0; i < 5; i++)
	{
		printf("insert the %d elements of the array \n",i);
		scanf("%d", &numb[i]);
	}

	for (int i = 0; i < size; i++)
	{
		int * element = &numb[i];
		
		for (int j = i+1; j < size; j++)
		{
			if (numb[j] < numb[i])
			{
				element = &numb[j];
				
			}
		}
		
		sortItem(element, &numb[i]);
		
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