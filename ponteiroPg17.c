#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int array[5] = {1,2,3,4,5};
    int *pointer;
    pointer = &array[0];
    
    printf("\nPrimeiro Elemento: %d", *pointer);
    pointer++;
    printf("\nSegundo Elemento: %d", *pointer);
    pointer++;
    printf("\nTerceiro Elemento: %d", *pointer);
    int i;
    
    for(i=0; i<5; i++)
        printf("\nArray[%d]=%d", i, array[i]);
    return 0;
}
