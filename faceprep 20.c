#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a<=12)
        printf("%d",(b*c));
    else
        printf("Invalid Input");
    return 0;
}

