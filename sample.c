#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p, n = 5, i;

    p = (int*)malloc(n * sizeof(int));

    if (p == NULL) {
        printf("Allocation failed");
        return 1;
    }

    printf("Enter 5 numbers:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    printf("Elements are:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}
