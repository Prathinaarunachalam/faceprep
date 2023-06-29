#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,e,f,g;
    scanf("%d\n%d\n%d",&a,&b,&c);
    d=(a*b)/100;
    e=((a-d)*c)/100;
    f=(a-(d+e));
    g=f/3;
    printf("%d\n%d\n%d",d,e,g);
    return 0;
}

