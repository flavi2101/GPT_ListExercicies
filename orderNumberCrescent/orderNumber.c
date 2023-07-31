#include <stdio.h>
#include <stdlib.h>

int main(){

	int input[3];

	for(int i =0; i< 3; i++){
		printf("insert the %d three value to be order \n",i);
		scanf("%d",&input[i]);
	}

	for(int j =0;j<2;j++){
		int aux;
		if(input[j] > input[j+1]){
			aux = input[j+1];
			input[j+1]= input[j];
			input[j] = aux;
		}
	}
	for(int i =0; i< 3; i++){
		printf("show array %d \n",input[i]);
		
	}
	
return 0;
}
