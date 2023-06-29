#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b;
    scanf("%d",&a);
    if(a<=200)
        b=a*0.5;
    else if(a<=400)
        b=(a*0.65)+100;
    else if(a<=600)
        b=(a*0.80)+200;
    else
        b=(a*1.25)+425;
    printf("Rs.%d",b);
    return 0;
}
