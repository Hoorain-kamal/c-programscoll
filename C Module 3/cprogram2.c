//Program to allocate memory using malloc and display values
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, i, n = 3;

    p = (int *)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Memory not allocated");
        return 0;
    }

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Values are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}
