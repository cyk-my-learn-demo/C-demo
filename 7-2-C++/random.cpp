#include <stdlib.h>
#include <stdio.h>
#include <time.h> 
#define MAX 10
 
int main( void)
{
    int number[MAX] = {0};
    int i;
    srand((unsigned) time(NULL));
    for(i = 0; i < MAX; i++)
    {
        number[i] = rand() % 100; 
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}
