#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    float b;
    char c[10];
    char d[20];
    scanf("%s",&d);
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%s",&c);
    printf("Name:%s",d);
    printf("\nAge:%d",a);
    printf("\nCGPA:%.2f",b);
    printf("\nGrade:%s",c);
    return 0;
}

