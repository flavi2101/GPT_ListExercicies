#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("insert a number:\n");
    char *val = (char *)malloc(sizeof(int));
    scanf("%s", val);

    int i = 0;
    int sum =0;
    while (*(val + i) != '\0')
    {
        char aux = *(val + i);
        int change = atoi(&aux);
        sum+= change;
        
        i++;
    }
    
        printf("%d ", sum);
    
    return 0;
}
