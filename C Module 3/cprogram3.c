//Program to allocate and free dynamic memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;

    p = (int *)malloc(sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed");
        return 0;
    }

    *p = 25;
    printf("Value = %d\n", *p);

    free(p);   // freeing memory
    printf("Memory freed");

    return 0;
}