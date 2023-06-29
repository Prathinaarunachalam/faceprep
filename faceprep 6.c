#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float val;
    int val1,val2,val3;
    scanf("%f",&val);
    val1 = (int)val;
    val2 = ceil(val);
    val3 = floor(val);
    printf("%d",val1);
    printf("\n%d",val2);
    printf("\n%d",val3);
    return 0;
}
