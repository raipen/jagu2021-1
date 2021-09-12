#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct humanBeing {
    char name[10];
    int age;
    float salary;
} humanBeing;


void main() {
    
    humanBeing p1, p2;
    printf("input person1's name, age, and salary: \n");
    scanf("%s %d %f", p1.name, &p1.age, &p1.salary);
    printf("input person2's name, age, and salary: \n");
    scanf("%s %d %f", p2.name, &p2.age, &p2.salary);

    printf("%s", !strcmp(p1.name,p2.name)&&p1.age==p2.age&&p1.salary==p2.salary?"same!":"not same!");

}