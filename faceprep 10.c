
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,d,e;
    float c;
    scanf("%d%d",&a,&b);
    c=(a/b);
    d=b*c;
    e=a-d;
    printf("The number of friends in each team is %.0f and left out is %d",c,e);
    return 0;
}
