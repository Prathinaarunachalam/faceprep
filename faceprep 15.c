#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,rev=0,remain;
    scanf("%d",&n);
    while(n!=0)
    {
        remain=n%10;
        rev=rev*10+remain;
        n/=10;
    }
    printf("%d",rev);
    return 0;
}
