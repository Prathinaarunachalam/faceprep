#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("The required length is %d m",2*(a+b));
    printf("\nThe required area of carpet is %d sqm",(a*b));
    return 0;
}
