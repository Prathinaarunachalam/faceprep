#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,r,c;
    scanf("%d",&a);
    r = (a-1)/3;
    c = (a-1)%3;
    printf("%d %d",r,c);
    return 0;
}

