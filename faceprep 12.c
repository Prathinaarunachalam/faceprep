#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y;
    scanf("%d%d",&x,&y);
    int d=sqrt(pow((x-3),2)+pow((y-4),2));
    printf("%d",d);
    return 0;
}

