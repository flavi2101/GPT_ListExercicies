#include <stdio.h>
#include <stdlib.h>

void printValue(char *);

int main(){
	printf("insert a number:\n");
	float number;
	scanf("%f",&number);
	if (number > 0) printValue("Grather");
	else if( number < 0) printValue("Less");
	else printf("The value is zero!");
return 0;
}

void printValue(char * respon){
	printf("The value is %s than zero",respon);
}
