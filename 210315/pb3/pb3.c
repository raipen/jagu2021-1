#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SWAP(a, b) { int t; t = a; a = b; b = t; }

void ssd(int* a,int n) {
    int max;
    for (int i = 0; i < n - 1;i++) {
        max = i;
        for (int j = i + 1; j < n;j++)
            if (a[j] > a[max])
                max = j;
        SWAP(a[i], a[max]);
    }
}

void main() {

    FILE* fp = fopen("in.txt", "r");
    if (!fp) {
        printf("파일 없음");
        exit(1);
    }
    int t;
    fscanf(fp, "%d ", &t);
    int* a = (int*)calloc(t, sizeof(int));
    int c = 0;
    while (fscanf(fp, "%d ", a + c++) != -1);

    ssd(a,t);

    for (int i = 0;i < t;i++) {
        printf("%d ", *(a + i));
    }
}