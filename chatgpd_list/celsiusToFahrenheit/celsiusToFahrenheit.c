#include <stdio.h>
#include <stdlib.h>

int main (){
	float celsius;
	printf("insert the temperature in celsius \n");
	scanf("%f",&celsius);
	//  F = (C *9/5) + 32

	printf("the value of temperature in fahrenheit is:%.2f ",(celsius * 9 / 5)+32);

return 0;
}

