
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1, *arr2, *arr3;
    int n = 5, i;

    // Allocate memory for arr1 using malloc()
    arr1 = (int*)malloc(n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize arr1
    for (i = 0; i < n; i++) {
        arr1[i] = i;
    }

    // Print arr1
    printf("arr1:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Allocate memory for arr2 using calloc()
    arr2 = (int*)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize arr2
    for (i = 0; i < n; i++) {
        arr2[i] = i * i;
    }

    // Print arr2
    printf("arr2:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Reallocate memory for arr1 using realloc()
    arr1 = (int*)realloc(arr1, 2 * n * sizeof(int));
    if (arr1 == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Initialize the new portion of arr1
    for (i = n; i < 2 * n; i++) {
        arr1[i] = i;
    }

    // Print the new arr1
    printf("new arr1:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Free the memory allocated for arr1 and arr2
    free(arr1);
    free(arr2);

    // Allocate memory for arr3 using malloc()
    arr3 = (int*)malloc(n * sizeof(int));
    if (arr3 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize arr3
    for (i = 0; i < n; i++) {
        arr3[i] = i * i * i;
    }

    // Print arr3
    printf("arr3:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    // Free the memory allocated for arr3
    free(arr3);

return 0;
}