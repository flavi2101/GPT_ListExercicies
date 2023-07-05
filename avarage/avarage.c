#include <stdio.h>
#include <stdlib.h>
int main()
{	unsigned int value;
	unsigned int sum;
	printf("insert three value to calculete the avarage: \n");
	for (int i = 0; i < 3; i++)
	{

		scanf("%d", &value);
		sum += value;
	}
	printf("avarage is %d ", sum/3);
	return 0;
}
