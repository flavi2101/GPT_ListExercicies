#include<stdio.h>
#include<stdlib.h>

int main (){

	int value;
	printf("insert a number:");
	scanf("%d",&value);

	if(value % 2 == 0){
		printf("it's odd number");
}	else printf("it's a even number");

return 0;
}
