#include <stdio.h>
#include <stdlib.h>

int main(){
	int value;
	printf("insert the value and press enter to se the multiplication table of this number:");
	scanf("%d",&value);

	for (int i =0; i <= 10; i ++){
	printf("\n the value of %d times  %d is equal to: %d \n ",value,i, value*i);
}

return 0;
}
