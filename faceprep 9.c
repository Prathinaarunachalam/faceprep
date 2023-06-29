#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
    scanf("%d",&a);
    b=(a%10);
    c=(a/1000)%10;
    printf("%d",(b+c));
    return 0;
}

