#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a+c+1;
    f=b+d;
    g=f%100;
    printf("%d\n%d",e,g);
    return 0;
}

