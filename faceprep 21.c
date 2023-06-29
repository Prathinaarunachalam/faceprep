#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    scanf("%d",&a);
    if(a%4==0)
        printf("%d is a leap year",a);
    else
        printf("%d is not a leap year",a);
    return 0;
}
