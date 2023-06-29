#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    scanf("%d",&a);
    b=(a/10)%10;
    if(b%3==0)
        printf("Trendy Number");
    else
        printf("Not a Trendy Number");
    return 0;
}
