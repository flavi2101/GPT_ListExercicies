#include <stdio.h>
#include <stdlib.h>

int main()
{
	int prime, i = 2;
	printf("insert a number to see the firts N  prime numbers \n");
	scanf("%d", &prime);

	while (prime != 0)
	{
		if (i == 2 || i == 3 || i == 5)
		{
			printf("The  primos are: %d \n", i);
			prime -= 1;
		}
		else if (!((i % 2 == 0) || (i % 3 == 0) || (i % 5 == 0)))
		{
			printf("The  primos are: %d \n", i);
			prime -= 1;
		}
		
			i++;
	}

	return 0;
}
