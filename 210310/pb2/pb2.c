#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//인자 2개만 받는 경우
int pa(char a[], int n) {
    if (strlen(a) / 2 == n) return 1;
    if (a[n] != a[strlen(a) - 1 - n]) return 0;
    pa(a, ++n);
}

// //인자 3개 받는 경우
//int pa(char a[], int l,int r) {
//    if (l>=r) return 1;
//    if (a[l] != a[r]) return 0;
//    pa(a, ++l,--r);
//}

void main() {
    char input[20];
    while (1) {
        printf("문자열을 입력하세요:");
        fscanf(stdin, "%s", input);
        // 인자 2개
        printf("%s\n", pa(input, 0) ? "Palindrome!" : "NOT palindrome!");
        ////인자 3개
        //printf("%s\n", pa(input, 0,strlen(input)-1) ? "Palindrome!" : "NOT palindrome!");
    }
}