#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,p;
    scanf("%d%d%d",&a,&b,&c);
    d = (b-c)*a;
    p = (d-100);
    printf("%d",p);
    return 0;
}

