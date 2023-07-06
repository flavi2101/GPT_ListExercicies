#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main(){
	printf("insert the value to calculte the fatorial:\n");
	int number;
	scanf("%d",&number);
	int resp = fatorial(number);
	printf("The faotrial of the value %d is %d",number,resp);
}

int fatorial(int value){
	int auxiliar =1;	
	for (int i = value; i > 0; i --){
		auxiliar *=i;
	}
return auxiliar;
}
