#include<stdio.h>
#include<string.h>
int main() {

    int a;
    float b;
    char c[20];
    char d[30];
    printf("Name:");
    scanf("%s",&d);
    printf("\nAge:");
    scanf("%d",&a);
    printf("\nCGPA:");
    scanf("%.2f",&b);
    printf("\nGrade:");
    scanf("%c",&c);
    return 0;
}
