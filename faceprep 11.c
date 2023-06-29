#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x1,y1,x2,y2;
    float a,b;
    scanf("%d\n%d\n%d\n%d",&x1,&y1,&x2,&y2);
    a = (x1+x2)/2;
    b = (float)(y1+y2)/2;
    printf("Arun's house is located at(%.1f,%.1f)",a,b);
    return 0;
}
