#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int global[] = {1, 2, 3, 4, 5};

void fill(int* vector, int size, int value) {
    for (int i = 0; i < size; i++) {
        vector[i] = value;
    }
}
int find(int* vector, int size, int value) {
    int i;
    for (i = 0; i < size && vector[i] != value; i++)
        ;
    return i >= size ? -1 : i;
}

int main() {
    int automatic[] = {1, 2, 3, 4, 5};
    int* dynamic = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) dynamic[i] = i + 1;
    free(dynamic);
}

