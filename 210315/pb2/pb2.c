#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void freeArray(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        free(*(arr+i));
        printf("free(arr[%d])...\n", i);
    }
    free(arr);
    printf("free array...\n");
}

void main() {
    int row, col;
    printf("row size:");
    scanf("%d", &row);
    printf("col size:");
    scanf("%d", &col);

    int** arr = (int**)malloc(sizeof(int*) * row);
    for (int i = 0;i < row;i++) {
        *(arr+i) = (int *)malloc(sizeof(int) * col);
        for (int j = 0;j < col;j++) {
            *(*(arr + i) + j) = (i + 1) * (j + 1) - 3;
        }
    }

    for (int i = 0;i < row;i++) {
        for (int j = 0;j < col;j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    freeArray(arr,row,col);

}